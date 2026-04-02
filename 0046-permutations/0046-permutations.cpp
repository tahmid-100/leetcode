class Solution {
public:
    vector<vector<int>> permute(vector<int>& nums) {
     
     vector<vector<int>>ans;vector<int>path;vector<bool>used(nums.size(),false);

     backtrack(used,nums,path,ans);

     return ans;

        
    }

    void backtrack(vector<bool>&used,vector<int>& nums,vector<int>&path,vector<vector<int>>&ans){

        if(path.size()==nums.size()){
            ans.push_back(path); //reached goal state
            return;
        }

        for(int i=0;i<nums.size();i++ ){

              if(used[i]) continue;   

              used[i]=true;

              path.push_back(nums[i]);//choice

              backtrack(used,nums,path,ans);//explore

              path.pop_back();//unchoice

              used[i]=false;
        }



    }
};