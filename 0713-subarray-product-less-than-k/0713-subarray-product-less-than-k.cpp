class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k) {
          if (k <= 1) return 0;
                int n=nums.size();

                int p=1;int i=0,j=0;int ans=0;

                while(j<n){
                     
                    p=p*nums[j];

                      while(p>=k){
                        p=p/nums[i];
                        i++;
                      }
                         
                      ans+=(j-i+1);
                      j++;
                }

                return ans;
    }
};