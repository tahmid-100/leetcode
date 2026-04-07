class Solution {
public:
    vector<int> eventualSafeNodes(vector<vector<int>>& graph) {
      int n=graph.size();
        vector<vector<int>>revGraph(n);

        for(int i=0;i<n;i++){
            for(auto n:graph[i]){
                revGraph[n].push_back(i);
            }
        }
          vector<int>indegree(n);
        for(int i=0;i<n;i++){

            for(auto r:revGraph[i]){
                indegree[r]++;
            }
            
        }

        queue<int>q;

              for(int i=0;i<n;i++){
             
             if(indegree[i]==0){
                q.push(i);
             }
            
        }
          vector<int>res;
        while(!q.empty()){

            int curr=q.front();
            q.pop();

            res.push_back(curr);

            for(auto n:revGraph[curr]){

                indegree[n]--;

                if(indegree[n]==0){
                    q.push(n);
                }
            }
        }

      sort(res.begin(),res.end());
       return res;

        
    }
};