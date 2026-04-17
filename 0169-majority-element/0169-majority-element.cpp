class Solution {
public:
    int majorityElement(vector<int>& nums) {

        int n=nums.size();
        int ans=0;

        map<int,int>mp;

        for(int i=0;i<n;i++){

            mp[nums[i]]++;
        }

        for(auto m:mp){

            if(m.second > (n/2)){
                ans = m.first;
            }
        }

        return ans;
        
    }
};