#include <bits/stdc++.h>
using namespace std;

bool vis[20][20];
pair<int, int> parent[20][20];
vector<pair<int, int>> d = {{0, 1}, {0, -1}, {-1, 0}, {1, 0}};
int n, m;
int a[20][20];

bool valid(int i, int j)
{
    if (i < 0 || i >= n || j < 0 || j >= m)
        return false;
    return true;
}

void bfs(int si, int sj)
{
    queue<pair<int, int>> q;
    q.push({si, sj});
    vis[si][sj] = true;
    parent[si][sj] = {-1, -1};

    while (!q.empty())
    {
        pair<int, int> par = q.front();
        int a = par.first, b = par.second;
        q.pop();
        for (int i = 0; i < 4; i++)
        {
            int ci = a + d[i].first;
            int cj = b + d[i].second;
            if (valid(ci, cj) == true && vis[ci][cj] == false)
            {
                q.push({ci, cj});
                vis[ci][cj] = true;
                parent[ci][cj] = {a, b};
            }
        }
    }
}

void printPath(int si, int sj, int di, int dj)
{
    vector<pair<int, int>> path;
    pair<int, int> current = {di, dj};

    while (current != make_pair(-1, -1))
    {
        path.push_back(current);
        current = parent[current.first][current.second];
    }

    reverse(path.begin(), path.end());

    cout << "Path from source (" << si << ", " << sj << ") to destination (" << di << ", " << dj << "):" << endl;
    for (auto cell : path)
    {
        cout << "(" << cell.first << ", " << cell.second << ") ";
    }
    cout << endl;
}

int main()
{
    cin >> n >> m;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> a[i][j];
        }
    }

    int si, sj; // Source coordinates
    cin >> si >> sj;
    int di, dj; // Destination coordinates
    cin >> di >> dj;

    memset(vis, false, sizeof(vis));

    bfs(si, sj);

    if (vis[di][dj]) // Check if the destination was reached
    {
        printPath(si, sj, di, dj);
    }
    else
    {
        cout << "No path found from (" << si << ", " << sj << ") to (" << di << ", " << dj << ")" << endl;
    }

    return 0;
}
