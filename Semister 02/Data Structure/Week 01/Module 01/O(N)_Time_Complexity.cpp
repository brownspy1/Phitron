// Created by M.Mahadi on 2024-07-05 21:48:50
#include <iostream>
using namespace std;
int main(){
    int n; //O(1) 
    cin>>n;//O(1)
    int ar[n];//O(1)
    for (int i = 0; i < n; i++)
    {
        cin>>ar[i];//O(N)
    }
    int s = 0;//O(1)
    for (int i = 0; i < n; i+=10)
    {
        s+=ar[i];//O(N)
    }
    cout<<s<<endl;//O(1)
    // O(1) is constant
    // O(N+N)
    //O(2N)
    //O(N)
    return 0;
}