//by level
void dsu_union(int node1,int node2){
    int adminA = dsu_find(node1);
    int adminB = dsu_find(node2);
    if(level[adminA] > level[adminB]){
        par[adminB] = adminA;
    }else if(level[adminB] > level[adminA])
    {
        par[adminA] = adminB;
    }else
    {
        par[adminB] = adminA;
        level[adminA]++; 
    }
    
    
}