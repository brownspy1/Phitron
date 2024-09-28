// Created by M.Mahadi on 2024-09-28 Time:18-18-55
#include <bits/stdc++.h>
using namespace std;
const int N = 1e5+5;
int parent[N];
int dsize[N];

void dsu_initial(int n){
    for (int i = 0; i < n; i++)
    {
        dsize[i] = 1;
        parent[i] = -1;
    }
    
}
int find(int n){
    if(parent[n] == -1) return n;
    int leader = find(n);
    parent[n] = leader;
    return leader;
}
int dsu_by_size(int a,int b){
    int parentA = find(a);
    int parentB = find(b);
    if (dsize[parentA] > dsize[parentB])
    {
        parent[parentB] = parentA;
        dsize[parentA] +=dsize[parentB];
    }else if (dsize[parentB] > dsize[parentA])
    {
        parent[parentA] = parentB;
        dsize[parentB]+=dsize[parentA];
    }    
}
int main(){
    
    return 0;
}