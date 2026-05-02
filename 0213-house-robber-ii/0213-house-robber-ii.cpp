class Solution {
public:
          int dp[100+1];
    int rob(vector<int>& nums) {

        int n=nums.size();

        if(n==1) return nums[0];

        if(n==2) return max(nums[0],nums[1]);

                dp[0]=nums[0];

        dp[1]=max(nums[0],nums[1]);

        int case1=rob_linear(nums,0,n-2);

        int case2=rob_linear(nums,1,n-1);

        return max(case1,case2);
        
    }

        int rob_linear(vector<int>& nums, int start, int end) {
        int n = end - start + 1;  // length of this segment
        
        if (n == 1) return nums[start];
        if (n == 2) return max(nums[start], nums[start + 1]);
        
        vector<int> dp(n);  // fresh dp for each call
        
        dp[0] = nums[start];
        dp[1] = max(nums[start], nums[start + 1]);
        
        for (int i = 2; i < n; i++) {
            dp[i] = max(dp[i-1], dp[i-2] + nums[start + i]);
        }
        
        return dp[n-1];
    }

};