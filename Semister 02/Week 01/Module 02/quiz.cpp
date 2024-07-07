// Created by M.Mahadi on 2024-07-07 15:36:37
#include <iostream>
#include <vector>
using namespace std;
int main(){
    int a[4] = {10,20,30,40};
    vector <int> v(a,a+4);
    v.insert(v.begin()+1,50);
    for(int a:v){
        cout<<a<<" ";
    }
    return 0;
}