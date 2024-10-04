// Created by M.Mahadi on 2024-10-04 Time:18-06-22
#include <bits/stdc++.h>
using namespace std;
const int N = 1e3;
int memoization[N][N];
int knapsack(int n,int weight[],int value[], int w){
    if (n==0 || w == 0) return 0;
    if (memoization[n][w] != -1) return memoization[n][w];
    
    if (weight[n-1] <= w)
    {
        int op1= knapsack(n-1,weight,value,w-weight[n-1])+value[n-1];
        int op2= knapsack(n-1,weight,value,w);
        memoization[n][w] = max(op1,op2);
        return max(op1,op2);
    }else
    {
        memoization[n][w] = knapsack(n-1,weight,value,w);
        return knapsack(n-1,weight,value,w);
    }
    
    
    
}
int main(){
    int n;cin>>n;
    int weight[n],value[n];
    memset(memoization,-1,sizeof(memoization));
    for (int i = 0; i < n; i++)
    {
        cin>>weight[i];
    }
    for (int i = 0; i < n; i++)
    {
        cin>>value[i];
    }
    int w;cin>>w;
    cout<<knapsack(n,weight,value,w);
    
    
    return 0;
}                                                                                 