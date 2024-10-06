// Created by M.Mahadi on 2024-10-04 Time:09-19-24
#include <bits/stdc++.h>
using namespace std;
int knapsack(int n,int weight[],int value[],int w){
    if (n < 0 || w == 0) return 0;

    if (weight[n] <= w)
    {
        int option1 = knapsack(n-1,weight,value,w-weight[n]) + value[n];
        int option2 = knapsack(n-1,weight,value,w);
        return max(option1,option2);
    }else
    {
        return knapsack(n-1,weight,value,w);
    }
    
    
    
}
int main(){
    int n;cin>>n;
    int weight[n],value[n];
    for (int i = 0; i < n; i++)
    {
        cin>>weight[i];
    }

    for (int i = 0; i < n; i++)
    {
        cin>>value[i];
    }
    int W;cin>>W;

    cout<<knapsack(n-1,weight,value,W)<<endl;
    return 0;
}