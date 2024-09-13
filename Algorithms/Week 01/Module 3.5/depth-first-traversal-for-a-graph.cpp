// https://www.geeksforgeeks.org/problems/depth-first-traversal-for-a-graph/
class Solution {
  public:
    bool vis[10005] = {false};
    vector<int> trDFS;
    void trve(int src,vector<int> adj[]){
        trDFS.push_back(src);
        vis[src] = true;
        for(int x:adj[src]){
            if(!vis[x]){
                trve(x,adj);
            }
        }
    }
    // Function to return a list containing the DFS traversal of the graph.
    vector<int> dfsOfGraph(int V, vector<int> adj[]) {
        trve(0,adj);
        return trDFS;
    }
};