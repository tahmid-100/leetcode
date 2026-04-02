class Solution {
public:
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {

        int start=0;int currSum=0;vector<int> path;vector<vector<int>>res;

        sort(candidates.begin(),candidates.end());

        backtrack(start,currSum,candidates,target,path,res);

        return res;
        
    }


    void backtrack(int start,int currSum,vector<int>& candidates,int target,vector<int>& path,vector<vector<int>>&res){
           
           if(currSum==target){

              res.push_back(path);

              return;
           }

           if(currSum>target){
              return;
           }

           for(int i=start;i<candidates.size();i++){
                if(i>start && candidates[i]== candidates[i-1]) continue;
                    
                   path.push_back(candidates[i]);

                   backtrack(i+1,currSum+candidates[i],candidates,target,path,res);

                   path.pop_back();
           }

    }
};