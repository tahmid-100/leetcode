class Solution {
public:
    int orangesRotting(vector<vector<int>>& grid) {

        int row=grid.size();

        int col =grid[0].size();

        int fresh=0;

        queue<pair<int,int>>q;

        int minutes=0;

        for(int i=0;i<row;i++){
            for(int j=0;j<col;j++){
                if(grid[i][j]==2){
                    q.push({i,j});
                }

                if(grid[i][j]==1) fresh++;
            }
        }
             if(fresh ==0) return 0;
            int dir[4][2]={{1,0},{-1,0},{0,1},{0,-1}};

            while(!q.empty() && fresh>0){

                int lvl=q.size();

                for(int i=0;i<lvl;i++){

                auto [r,c]=q.front();q.pop();
                
                for(auto [nx,ny]:dir){
                    nx=nx+r;
                    ny=ny+c;

                    if(nx>=0 && nx<row && ny>=0 && ny<col && grid[nx][ny]==1){
                        grid[nx][ny]=2;
                        fresh--;
                        q.push({nx,ny});
                    }
                }
            }  

            minutes++;

        }

        if(fresh>0) return -1;

        else return minutes;
    }
        
    
};