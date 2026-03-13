class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {

          int sum =0;
         

          int mincnt=INT_MAX;

          int n=nums.size();
          
           int j=0;
          for(int i=0;i<n;i++){
               sum=sum+nums[i];

               while(sum>=target && j<=i){
                   mincnt=min(mincnt,i-j+1);
                   sum=sum-nums[j];
                   j++;
                    
               }          
                          
          }
        return (mincnt == INT_MAX) ? 0 : mincnt;
    }
};