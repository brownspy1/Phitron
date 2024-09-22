// Created by M.Mahadi on 2024-07-07 16:00:54
#include <iostream>
#include <vector>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector <int> v;
    for (int i = 1; i <= n; i++)
    {
        v.push_back(i);
    }
    for(int x:v){
        cout<<x<<" ";
    }
    return 0;
}