//https://www.geeksforgeeks.org/problems/bfs-traversal-of-graph/1?utm_source=geeksforgeeks&utm_medium=ml_article_practice_tab&utm_campaign=article_practice_tab
class Solution {
  public:
    bool vis[10000] = {false};
    // Function to return Breadth First Traversal of given graph.
    vector<int> bfsOfGraph(int V, vector<int> adj[]) {
        vector<int> adj_bfs;
        queue<int> q;
        q.push(0);
        vis[0] =true;
        while(!q.empty()){
            int par = q.front();
            q.pop();
            adj_bfs.push_back(par);
            for(int i:adj[par]){
                if(!vis[i]){
                    q.push(i);
                    vis[i] =true;
                }
            }
            
        }
        return adj_bfs;
    }
};