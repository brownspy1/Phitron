// Created by M.Mahadi on 2024-07-07 16:09:07
#include <iostream>
#include <vector>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector <int> v(5,n);
    for (auto &&i : v)
    {
        cout<<i<<" ";
    }
    
    return 0;
}