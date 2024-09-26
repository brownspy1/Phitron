//https://leetcode.com/problems/find-if-path-exists-in-graph/description/
class Solution {
public:
    static const int N =  (2*1e5)+5;
    vector<int> adj[N];
    bool vis[N];
    void dfs(int s){
        vis[s] = true;
         for(int child:adj[s]){
            if(!vis[child]){
                dfs(child);
            }
         }
    }
    bool validPath(int n, vector<vector<int>>& edges, int source, int destination) {
        memset(vis,false,sizeof(vis));
        for(int i = 0; i<edges.size();i++){
            int a = edges[i][0];
            int b = edges[i][1];
            adj[a].push_back(b);
            adj[b].push_back(a);
        }
        dfs(source);
        return vis[destination];
    }
};