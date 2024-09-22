// Created by M.Mahadi on 2024-07-07 00:48:03
#include <iostream>
#include <vector>
using namespace std;
int main(){
    // vector <int> v;
    // int n;
    // cin>>n;
    //type of input 01
    // v.resize(n);
    // for (int i = 0; i < n; i++)
    // {
    //     cin>>v[i];
    // }
    // for (int x:v)
    // {
    //     cout<<x<<" ";
    // }

    //type of input 02
    // int n;
    // cin>>n;
    // vector <int> v(n);
    // for (int i = 0; i < n; i++)
    // {
    //     cin>>v[i];
    // }
    // for (int x:v)
    // {
    //     cout<<x<<" ";
    // }
    //type of input 03
    vector <int> v;
    int n;
    cin>>n;
    for (int i = 0; i < n; i++)
    {
        int c;
        cin>>c;
        v.push_back(c);
    }
    
    for (int x:v)
    {
        cout<<x<<" ";
    }

    
    return 0;
}