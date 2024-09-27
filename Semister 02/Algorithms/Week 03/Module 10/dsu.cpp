// Created by M.Mahadi on 2024-09-27 Time:10-59-10
#include <bits/stdc++.h>
using namespace std;
const int X  = 1e5+5;
int par[X];
int dsUsize[X];
int 
void initial_dsu(int n){
    for (int i = 0; i < n; i++)
    {
        par[i] = -1;
        dsUsize[i] = 1;
    }
    
}
int dsu_find(int n){
    if(par[n] == -1){
        return n;
    }
    int admin = dsu_find(par[n]);
    par[n] = admin;
    return admin;
}
// void dsu_union(int node1,int node2){
//     int adminA = dsu_find(node1);
//     int adminB = dsu_find(node2);
//     par[adminA] = adminB;
// }
//by level
void dsu_union(int node1,int node2){
    int adminA = dsu_find(node1);
    int adminB = dsu_find(node2);
    par[adminA] = adminB;
}
//by size
// void dsu_union(int node1,int node2){
//     int adminA = dsu_find(node1);
//     int adminB = dsu_find(node2);
//     if (dsUsize[adminA] > dsUsize[adminB])
//     {
//         par[adminB] = adminA;
//         dsUsize[adminA]+= dsUsize[adminB];
//     }else
//     {
//         par[adminB] = adminA;
//         dsUsize[adminB]+=dsUsize[adminA];
//     }
// }
int main(){
    initial_dsu(6);
    dsu_union(1,2);
    dsu_union(3,4);
    dsu_union(4,5);
    dsu_union(2,5);
    cout<<dsu_find(1)<<endl;
    cout<<dsu_find(4)<<endl;
    return 0;
}