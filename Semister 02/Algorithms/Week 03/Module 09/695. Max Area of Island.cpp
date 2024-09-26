//https://leetcode.com/problems/max-area-of-island/description/
class Solution {
public:
    int n , m;
    int cnt = 0;
    bool  vis[55][55];
    vector<pair<int,int>> d = {{1,0},{-1,0},{0,-1},{0,1}};
    bool valid(int ci,int cj){
        if(ci>=0 && cj>=0 && ci<n && cj<m){
            return true;
        }else return false;
    }
    void dfs(int si,int sj,vector<vector<int>>& grid){
        vis[si][sj] = true;
        cnt++;
        for(int i = 0; i<4;i++){
            int ci = si+d[i].first;
            int cj = sj+d[i].second;
            if(valid(ci,cj)&&!vis[ci][cj]&&grid[ci][cj] == 1){
                dfs(ci,cj,grid);
            }
        }
    }
    int maxAreaOfIsland(vector<vector<int>>& grid) {
        n = grid.size();
        m = grid[0].size();
        memset(vis,false,sizeof(vis));
        int mx = 0;
        for(int i = 0; i<n; i++){
            for(int j = 0; j<m;j++){

                if(!vis[i][j]&&grid[i][j] == 1){
                    cnt = 0;
                    dfs(i,j,grid);
                    mx = max(mx,cnt);
                }
            }
        }
        return mx;
    }
};