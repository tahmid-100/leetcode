class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        vector<int> pre;
        int sum = 0;
        int n = nums.size();
        
        // Calculate prefix sums
        for(int i = 0; i < n; i++) {
            sum += nums[i];
            pre.push_back(sum);
        }
        
        // Calculate suffix sums
        sum = 0;
        vector<int> suf;
        for(int i = n-1; i >= 0; i--) {
            sum += nums[i];
            suf.push_back(sum);
        }
        reverse(suf.begin(), suf.end());
        
        // Find pivot index
        int ans = -1;
        for(int i = 0; i < n; i++) {  

            if(pre[i] == suf[i]) {  
                return i;  
            }
        }
        
        return -1;
    }
};