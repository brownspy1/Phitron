// Created by M.Mahadi on 2024-07-07 15:15:50
#include <iostream>
#include <vector>
using namespace std;
int main(){
    int n;
    cin>>n;
    // type one
    // vector <string> v(n);
    // for (int i = 0; i < n; i++)
    // {
    //     cin>>v[i];
    // }
    // for (string x:v)
    // {
    //    cout<<x<<endl;
    // }
    //type two
    vector <string> v;
    cin.ignore();
    for (int i = 0; i < n; i++)
    {
        string m;
        getline(cin,m);
        v.push_back(m);
    }
    
    for (string x:v)
    {
        cout<<x<<endl;
    }
    
    return 0;
}