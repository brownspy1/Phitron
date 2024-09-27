//by size
// void dsu_union(int node1,int node2){
    int adminA = dsu_find(node1);
    int adminB = dsu_find(node2);
    if (dsUsize[adminA] > dsUsize[adminB])
    {
        par[adminB] = adminA;
        dsUsize[adminA]+= dsUsize[adminB];
    }else
    {
        par[adminB] = adminA;
        dsUsize[adminB]+=dsUsize[adminA];
    }
}