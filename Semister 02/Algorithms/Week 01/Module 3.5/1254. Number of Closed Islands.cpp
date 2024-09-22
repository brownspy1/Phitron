//https://leetcode.com/problems/number-of-closed-islands/description/
class Solution {
public:
    bool valid(int r,int c,int i,int j,vector<vector<int>>&grid){
        if(i<0|| j<0|| i>=r|| j>=c||grid[i][j] == 1) return false;
        return true;
    }
    void bfs(int r,int c,int i,int j,vector<vector<int>>&grid){
        queue<pair<int ,int>>q;
        q.push({i,j});
        grid[i][j] = 1;
        int dx[4] = {0,0,-1,1};int dy[4] = {1,-1,0,0};
        while(!q.empty()){
            pair<int,int> par =q.front();
            q.pop();
            int ci = par.first ;int cj = par.second;
            for(int k =0;k<4;k++){
                int cx = ci+dx[k];
                int cy = cj+dy[k];
                if(valid(r,c,cx,cy,grid)){
                    grid[cx][cy] = 1;
                    q.push({cx,cy});
                }
            }
        }
    }
    int closedIsland(vector<vector<int>>& grid) {
     int r = grid.size();
     int c = grid[0].size();
        //boundary detect
    for(int i = 0;i<r;i++){
        for(int j=0;j<c;j++){
            if(i*j == 0 || i==r-1 || j == c-1){
                if(grid[i][j] == 0){
                    bfs(r,c,i,j,grid);
                }
            }
        }
    }
    //full grid a detect ka ka baki ase
    int count = 0;
        for(int i = 0;i<r;i++){
            for(int j=0;j<c;j++){
                if(grid[i][j] == 0){
                    bfs(r,c,i,j,grid);
                    count++;
                }
            
            }
        }
        return count;
    }
};