// https://leetcode.com/problems/count-sub-islands/description/
class Solution
{
public:
    int n, m;
    bool vis[505][505];
    bool fl;
    bool valid(int ci, int cj)
    {
        if (ci >= 0 && cj >= 0 && ci < n && cj < m)
            return true;
        else
            return false;
    }
    vector<pair<int, int>> d = {{1, 0}, {-1, 0}, {0, 1}, {0, -1}};
    void dfs(int si, int sj, vector<vector<int>> &g1, vector<vector<int>> &g2)
    {
        vis[si][sj] = true;
        if (g1[si][sj] == 0)
            fl = false;
        for (int i = 0; i < 4; i++)
        {
            int ci = si + d[i].first;
            int cj = sj + d[i].second;
            if (valid(ci, cj) && !vis[ci][cj] && g2[ci][cj] == 1)
            {
                dfs(ci, cj, g1, g2);
            }
        }
    }
    int countSubIslands(vector<vector<int>> &grid1, vector<vector<int>> &grid2)
    {
        n = grid1.size();
        m = grid1[0].size();
        int ans = 0;
        memset(vis, false, sizeof(vis));
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                if (!vis[i][j] && grid2[i][j] == 1)
                {
                    fl = true;
                    dfs(i, j, grid1, grid2);
                    if (fl)
                    {
                        ans++;
                    }
                }
            }
        }
        return ans;
    }
};