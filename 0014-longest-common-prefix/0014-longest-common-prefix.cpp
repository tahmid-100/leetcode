class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        if (strs.empty()) return "";
        
        string ans = "";
        int n = strs.size();
        
        for (int i = 0; i < strs[0].size(); i++) {
            char c = strs[0][i];
            int cnt = 0;
            
            for (int j = 1; j < n; j++) {
                if (i < strs[j].size() && strs[j][i] == c) {
                    cnt++;
                } else {
                    break;
                }
            }
            
            if (cnt == n - 1) { 
                ans += c;
            } else {
                break;
            }
        }
        
        return ans;
    }
};