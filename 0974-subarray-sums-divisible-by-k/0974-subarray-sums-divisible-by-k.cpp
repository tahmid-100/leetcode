class Solution {
public:
    int subarraysDivByK(vector<int>& nums, int k) {
        vector<int>prefix;
        int sum=0;
        int n=nums.size();
        for(int i=0;i<n;i++){
           sum = (sum + nums[i]) % k;

           if(sum<0) sum+=k;
           prefix.push_back(sum);
        }

        map<int,int>mp;
        mp[0]=1;

        for(int i=0;i<prefix.size();i++){
            mp[prefix[i]]++;
        }
          int res=0;
        for(auto m:mp){
            if(m.second >1) res+=((m.second)*(m.second-1)/2);
        }
        
        return res;
    }
};