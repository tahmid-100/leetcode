class Solution {
public:
    bool checkSubarraySum(vector<int>& nums, int k) {

        unordered_map<int,int>mp;

        mp[0]=-1;


        int total=0;

        int n=nums.size();

        for(int i=0;i<n;i++){

            total+=nums[i];

            int rem = total % k;

            if(mp.find(rem)==mp.end()){
                mp[rem]=i;
            }

            else if (i-mp[rem]>1){
                return true;
            }


        }



       return false;
        
    }
};