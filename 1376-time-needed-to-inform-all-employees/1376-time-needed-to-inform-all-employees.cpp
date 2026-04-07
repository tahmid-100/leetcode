class Solution {
public:
    int numOfMinutes(int n, int headID, vector<int>& manager, vector<int>& informTime) {
        
        vector<vector<int>>sub(n);

        for(int i=0;i<n;i++){

            if(manager[i]!=-1){
                sub[manager[i]].push_back(i);
            }
        }

        return dfs(headID,sub,informTime);
    }

    int dfs(int node,vector<vector<int>>&sub,vector<int>& informTime){

        if(sub.empty()){
            return 0;
        }
          int mx=0;
        for(auto n:sub[node]){

            mx=max(mx,dfs(n,sub,informTime));

        }

        return mx+informTime[node];

    }
};