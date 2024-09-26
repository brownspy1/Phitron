//https://leetcode.com/problems/island-perimeter/
class Solution {
public:
    vector<pair<int,int>> pm{{0,1},{0,-1},{-1,0},{1,0}};
    int n,m;
    bool vis[105][105];
    int count = 0;
    bool valid(int ci,int cj){
        if(ci>=0 && cj>=0 && ci<n && cj<m) return true;
        else return false;
    }
    void bfs(int si,int sj,vector<vector<int>>& grid){
        queue<pair<int,int>> q;
        q.push({si,sj});
        vis[si][sj] = true;
        while(!q.empty()){
            pair pir = q.front();
            q.pop();
            int x= pir.first;
            int j= pir.second;
            
            for(int i = 0;i<4;i++){
                int ci = x+pm[i].first;
                int cj = j+pm[i].second;
                if(valid(ci,cj)){
                    if(grid[ci][cj] == 0) count++;
                }else{
                    count++;
                }
                if(valid(ci,cj) && !vis[ci][cj] &&grid[ci][cj] == 1){
                    vis[ci][cj]= true;
                    q.push({ci,cj});
                }
            }
        }
    }
    int islandPerimeter(vector<vector<int>>& grid) {
        memset(vis,false,sizeof(vis));
        n = grid.size();
        m = grid[0].size();
        for(int i = 0; i < n;i++){
            for(int j = 0; j< m;j++){
                if(!vis[i][j] && grid[i][j] == 1){
                    bfs(i,j,grid);
                }
            }
        }
        return count;
    }
};