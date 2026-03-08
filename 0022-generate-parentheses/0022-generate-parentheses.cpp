class Solution {
public: 
      
    
    void solve (string &s,int n,int open,int close,vector<string>&ans){
        if(s.size()==2*n){
            ans.push_back(s);
           
           
            return;
        }

        if(open < n){
            s.push_back('(');
            solve(s,n,open+1,close,ans);
            s.pop_back();
        }

        if(open>close){
            s.push_back(')');
            solve(s,n,open,close+1,ans);
            s.pop_back();
        }
    }

    vector<string> generateParenthesis(int n) {

        string s;int open=0;int close=0; vector<string>ans;

           solve(s,n,open,close,ans);

           return ans;
        }
        
    };
