//https://leetcode.com/problems/number-of-closed-islands/description/
class Solution {
public:
    bool vis[105][105];
    int n,m;
    bool valid(int ci,int cj){
        if(ci>=0 && cj>=0 && ci<n && cj<m){
            return true;
        }else return false;
    }
    bool  flag ;
    vector<pair<int,int>> d = {{0,1},{0,-1},{1,0},{-1,0}};
    void dfs(int si, int sj, vector<vector<int>>& grid){
        vis[si][sj] = true;
        if(si == 0|| si == n-1 || sj == 0 || sj == m-1) flag = false;
        for(int i = 0; i<4;i++){
            int ci = si+d[i].first;
            int cj = sj+d[i].second;

            if(valid(ci,cj) && !vis[ci][cj] && grid[ci][cj] == 0){
                vis[ci][cj] = true;
                dfs(ci,cj,grid);
            }
        }

    }
    int closedIsland(vector<vector<int>>& grid) {
        n = grid.size();
        m = grid[0].size();
        memset(vis,false,sizeof(vis));
        int ans = 0;
        for(int i =0; i<n;i++){
            for(int j = 0; j<m;j++){
                if(!vis[i][j] && grid[i][j] == 0){
                    flag = true;
                    dfs(i,j,grid);
                    if(flag) ans++;
                }
            }
        }
        return ans;
    }
};