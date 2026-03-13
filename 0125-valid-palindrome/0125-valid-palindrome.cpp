class Solution {
public:
    bool isPalindrome(string s) {
         string check="";
        for(int i=0;i<s.size();i++){
               if((0+s[i]>=65 && 0+s[i]<=90)||(0+s[i]>=97 && 0+s[i]<=122)|| (s[i] >= '0' && s[i] <= '9')){
                check+=(tolower(s[i]));
               }
        }

        int n=check.size();
         int l=0;
         int r=n-1;
         cout<<check<<"\n";
        while(l<r){
             if(check[l]!=check[r]) return false;

             l++;
             r--;
        }


        return true;
        
    }
};