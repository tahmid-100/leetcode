class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {

        int n=nums.size();

        double sum=0;

        for(int i=0;i<k;i++){
         
         sum+=double(nums[i]);

        }

        


         int l=0;

         double mx=sum;
        for(int i=k;i<n;i++){
           
           sum-=double(nums[l]);

           sum+=double(nums[i]);
           l++;

           mx=max(mx,sum);
            
        }


        return mx/k;
    }
};