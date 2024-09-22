// Created by M.Mahadi on 2024-07-07 16:12:01
#include <iostream>
#include <vector>
using namespace std;
int main(){
    int arry[5]={10, 20, 30, 40, 50};
    vector <int> v(arry,arry+5);
    for (auto &&i : v)
    {
        cout<<i<<" ";
    }
    
    return 0;
}