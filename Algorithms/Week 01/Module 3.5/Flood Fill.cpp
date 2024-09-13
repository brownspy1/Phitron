//https://leetcode.com/problems/flood-fill/description/
class Solution {
public:
    bool vis[50][50] = {false};
    vector<pair<int,int>> coOrdinat = {{0,1},{0,-1},{-1,0},{1,0}};
    bool valid(int ci,int cj,int row,int colum){
            if(ci<0 || cj<0 || ci>= row || cj>= colum) return false;
            return true;
    }
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        int r = image.size();
        int c = image[0].size();
        int mycolor = image[sr][sc];
        if(mycolor == color) return image;
        else image[sr][sc] = color;
        queue<pair<int,int>> q;
        q.push({sr,sc});
        vis[sr][sc] = true;
        while(!q.empty()){
            pair<int ,int> par = q.front();
            q.pop();
            int pi = par.first ;
            int pj = par.second ;
            for(int i = 0 ;i<4;i++){
                int x = pi+coOrdinat[i].first;int y = pj+coOrdinat[i].second ;
                if(valid(x,y,r,c) && mycolor == image[x][y]){
                    image[x][y] = color;
                    q.push({x,y});
                    vis[x][y] = true;
                }
            }
            
        }
        return image;
        
    }
};