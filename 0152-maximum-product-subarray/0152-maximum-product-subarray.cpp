class Solution {
public:
    int maxProduct(vector<int>& nums) {

        int n=nums.size();

        int res=*max_element(nums.begin(),nums.end());

        int currmax=1;int currmin=1;

        for(int i=0;i<n;i++){

            if(nums[i]==0){
                currmax=1;
                currmin=1;
            }
            
            int tempmax=currmax;

            currmax=max({nums[i],currmax*nums[i],nums[i]*currmin});
            currmin=min({nums[i],currmin*nums[i],nums[i]*tempmax});

            res=max(currmax,res);
        }
          
           return res;
    }
};