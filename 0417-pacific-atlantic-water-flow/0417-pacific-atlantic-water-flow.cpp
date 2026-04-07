class Solution {
public:
    vector<vector<int>> pacificAtlantic(vector<vector<int>>& heights) {
        int m=heights.size();

        int n=heights[0].size();

        vector<vector<bool>>pacific(m, vector<bool>(n, false));
         vector<vector<bool>>atlantic(m, vector<bool>(n, false));

         for(int i=0;i<m;i++){
            dfs(i,0,pacific,heights,m,n);//left row for pacific
         }

         for(int i=0;i<n;i++){
            dfs(0,i,pacific,heights,m,n);//top row for pacific
         }

          for(int i=0;i<m;i++){
            dfs(i,n-1,atlantic,heights,m,n);//right row for pacific
         }

         for(int i=0;i<n;i++){
            dfs(m-1,i,atlantic,heights,m,n);//bottom row for pacific
         }

          vector<vector<int>> res;

         for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(pacific[i][j]&&atlantic[i][j]){
                    res.push_back({i,j});
                }
            }
         }

         return res;
    }

    void dfs(int x,int y, vector<vector<bool>>&sea,vector<vector<int>>& heights,int m,int n){
        sea[x][y]=true;

        int dr[4][2]={{1,0},{-1,0},{0,1},{0,-1}};

        for(int i=0;i<4;i++){
            int nx=x+dr[i][0];
            int ny=y+dr[i][1];

            if(nx>=0 && nx<m && ny>=0 && ny<n &&!sea[nx][ny]&& heights[nx][ny]>=heights[x][y] ){
                 dfs(nx,ny,sea,heights,m,n);
            }
        }
    }
};