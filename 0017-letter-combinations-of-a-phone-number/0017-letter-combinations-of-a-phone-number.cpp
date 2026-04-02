class Solution {
public:
    vector<string> letterCombinations(string digits) {
            if(digits.empty()){

                return {};
            }

              vector<string>res;string path;
        vector<string>mapping={"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};

         backtrack(0,digits,mapping,path,res);
        
        return res;
    }

    void backtrack(int start,string digits,vector<string>mapping,string &path,vector<string>&res){
            
             if(path.size()==digits.size()){
                res.push_back(path);
                return;
             }

             string st=mapping[digits[start]-'0'];

             for(auto s :st){

                path.push_back(s);

                backtrack(start+1,digits,mapping,path,res);

                path.pop_back();
             }
    }


};