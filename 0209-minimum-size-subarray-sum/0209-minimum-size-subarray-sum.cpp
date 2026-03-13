class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {

          int sum =0;
         

          int mincnt=INT_MAX;

          int n=nums.size();
          

          for(int i=0;i<n;){

            int j=i;
            sum=0;
                 while(sum<target && j<n){
                    
                    sum+=nums[j];
                    j++;
                 }

                 
                 
                 if(sum>=target){
                    cout<<j-i<<"\n";
                    mincnt=min(mincnt,j-i);  
                    
                    i++;

                 }

                 else  break;
                         
                          
          }
        return (mincnt == INT_MAX) ? 0 : mincnt;
    }
};