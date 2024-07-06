// Created by M.Mahadi on 2024-07-06 16:43:08
#include <iostream>
#include <vector>
using namespace std;
int main(){
    vector <int> v={10,20,50};
    vector <int> v2={1,2,5};
    v=v2;
    for (int i = 0; i < v.size(); i++)
    {
        cout<<v[i]<<" ";
    }
    
    return 0;
}