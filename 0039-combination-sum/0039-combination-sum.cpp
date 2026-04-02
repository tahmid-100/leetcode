class Solution {
public:
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
          int currSum=0;int start=0;vector<int>path;vector<vector<int>>res;

           backtrack(start,candidates,target,currSum,path,res);

           return res;
    }
    
    void backtrack(int start,vector<int>& candidates,int target,int currSum,vector<int>&path,vector<vector<int>>& res){

        if(currSum==target){
            res.push_back(path);//goal state
            return;
        }

        if(currSum>target) return; //pruned dead branches

        for(int i=start;i<candidates.size();i++){
               
               path.push_back(candidates[i]); //choice

               backtrack(i,candidates,target,currSum+candidates[i],path,res); //explore options

               path.pop_back(); //unchoice



        }
       
    }
};