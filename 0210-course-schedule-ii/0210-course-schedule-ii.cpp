class Solution {
public:
    vector<int> findOrder(int numCourses, vector<vector<int>>& prerequisites) {

        vector<vector<int>>adj(numCourses); vector<int>indegree(numCourses);

        for(auto pre:prerequisites){

            int a=pre[0];

            int b=pre[1];

            adj[b].push_back(a);
            indegree[a]++;
        }

        queue<int>q;

        for(int i=0;i<numCourses;i++){
            if(indegree[i]==0){
                q.push(i);
            }
        }
           vector<int> result;
        while(!q.empty()){
            int course=q.front();
            q.pop();

              result.push_back(course);

              for(auto n:adj[course]){
                  indegree[n]--;

                  if(indegree[n]==0){
                    q.push(n);
                  }
              }
        }

           if (result.size() == numCourses) {
            return result;
        }
        

        return {};
    }
};