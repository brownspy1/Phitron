// Created by M.Mahadi on 2024-07-07 20:48:46
#include <iostream>
#include <vector>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector <int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin>>v[i];
    }
    for (int i = 0; i < n-1; i++)
    {
        for (int j = i+1; j < n; j++)
        {
            int temp = v[i];
            v[i] = v[j];
            v[j] = temp;
        }
        
    }
    

    for (auto &&i : v)
    {
        cout<<i<<" ";
    }
    
    return 0;
}