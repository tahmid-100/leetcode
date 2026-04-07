class Solution {
public:
    
    void dfs(int x, vector<vector<int>>& isConnected, vector<bool>& visited) {
        visited[x]= true;
       

          for (int j = 0; j < isConnected.size(); j++) {
            
           if(isConnected[x][j] == 1 && !visited[j]){
            dfs(j, isConnected, visited);
           }
            
        }


    }

    int findCircleNum(vector<vector<int>>& isConnected) {
        int n = isConnected.size();
        vector<bool> visited(n,false);
        int provinces = 0;

        for (int i = 0; i < n; i++) {
            
            if (!visited[i]) {
                provinces++;     
                dfs(i, isConnected, visited);
            }  
            
        }
        return provinces;
    }
};