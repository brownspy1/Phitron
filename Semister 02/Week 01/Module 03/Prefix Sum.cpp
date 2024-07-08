// Created by M.Mahadi on 2024-07-08 00:07:57
#include <iostream>
using namespace std;
int main(){
    long long int n,x;
    cin>>n>>x;
    long long int v[n];
    for (int i = 0; i < n; i++)
    {
        cin>>v[i];
    }
    long long int pri[n];
    pri[0]=v[0];
    for (int i = 1; i < n; i++)
    {
        pri[i] = v[i]+pri[i-1];
    }
    
    
    
    while (x--)
    {
        long long int a,b;
        cin>>a>>b;
        a--;
        b--;
        if (a==0)
        {
            cout<<pri[b]<<endl;
        }else
        {
            cout<<pri[b]-pri[a-1]<<endl;
        }
        
        
        
    }
    
    return 0;
}