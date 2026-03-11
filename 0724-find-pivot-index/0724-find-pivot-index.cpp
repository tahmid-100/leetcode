class Solution {
public:
    int pivotIndex(vector<int>& nums) {
      
        int sum = 0;
        int n = nums.size();

        int left=0,right=0;

        for(int i=0;i<n;i++){
            sum+=nums[i];
        }
           if(sum==nums[0]) return 0; 
         for(int i=1;i<n;i++){
            left=left+nums[i-1];
            right=sum-left-nums[i];

            if(left==right) return i;
        }
        
        return -1;
    }
};