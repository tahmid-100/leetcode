class Solution {
public:
    int subarraysDivByK(vector<int>& nums, int k) {
        map<int,int>countRemainder;
        int sum=0;
        int cnt=0;
        countRemainder[0]=1;

        for(int i=0;i<nums.size();i++){

            sum+=nums[i];

            int rem=((sum%k)+k)%k;

            if(countRemainder.find(rem)!=countRemainder.end()){
                cnt+=countRemainder[rem];
            }

            countRemainder[rem]++;
        }

        return cnt;
      
    }
};