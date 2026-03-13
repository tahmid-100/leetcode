class Solution {
public:
    int removeDuplicates(vector<int>& nums) {

        int n=nums.size();
       int ans=1;
        for(int i=1;i<nums.size();i++){
           if(nums[i]!=nums[i-1]) ans++;
           else{
               //erase from nums
               nums.erase(nums.begin() + i);
                i--;
           }
        }

        
        
        return ans;
    }
};