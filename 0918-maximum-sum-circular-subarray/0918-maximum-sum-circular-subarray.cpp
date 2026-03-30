class Solution {
public:
    int maxSubarraySumCircular(vector<int>& nums) {

        int n=nums.size();
        int totalSum=0;

        for(int i=0;i<n;i++){
           totalSum+=nums[i];
        }

        int currSum1=0;int maxSum=INT_MIN;

        int currSum2=0;int minSum=INT_MAX;

        for(int i=0;i<n;i++){

            currSum1=max(nums[i],nums[i]+currSum1);
            maxSum=max(maxSum,currSum1);
            
            currSum2=min(nums[i],currSum2+nums[i]);
            minSum=min(minSum,currSum2);

        }

        if(maxSum<0) return maxSum;

        else return max(maxSum,totalSum-minSum);


    }
};