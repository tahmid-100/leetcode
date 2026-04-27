class Solution {
public:
    vector<int> findAnagrams(string s, string p) {

           vector<int>result;

           if(p.size()>s.size()) return result;

          vector<int>p_cnt(26,0);vector<int>window(26,0);

          for(char c : p){

              p_cnt[c - 'a']++;
          }


          for(int i=0;i<p.size();i++){

              window[s[i]-'a']++;
          }


          if(p_cnt == window){

             result.push_back(0);
          }


          for(int i=p.size();i<s.size();i++){
                
                char left = s[i-p.size()];

                window[left-'a']--;

                char right=s[i];

                window[right-'a']++;

                if(p_cnt==window){

                    result.push_back(i-p.size()+1);
                }
              
          }

          
            return result;
    }
};