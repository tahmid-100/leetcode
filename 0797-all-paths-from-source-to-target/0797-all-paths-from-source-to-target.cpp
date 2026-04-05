class Solution {
public:
    vector<vector<int>> allPathsSourceTarget(vector<vector<int>>& graph) {

        int start=0;int target=graph.size()-1;vector<int>path;vector<vector<int>>res;

        path.push_back(0);

        backTrack(graph,start,target,path,res);

        return res;
        
    }

    void backTrack(vector<vector<int>>& graph,int start,int target,vector<int>&path,vector<vector<int>>& res){
            
            if(start==target){
                res.push_back(path);
                return;
            }


            for(auto n : graph[start]){
                  
                  path.push_back(n);

                  backTrack(graph,n,target,path,res);

                  path.pop_back();

            }

    }
};