// Created by M.Mahadi on 2024-07-07 20:15:57
#include <iostream>
#include <vector>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector <string> v(n);

    for (int i = 0; i < n; i++)
    {
        cin>>v[i];
    }
    
    for (int i = 0; i < v.size(); i++)
    {
        if (v[i][0]>='a'&& v[i][0]<='z')
        {
            v[i][0]=v[i][0]-32;
        }
        
    }
    
    for (auto &&i : v)
    {
        cout<<i<<endl;
    }
    
    return 0;
}