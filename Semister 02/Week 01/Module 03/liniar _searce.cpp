// Created by M.Mahadi on 2024-07-08 15:52:08
#include <iostream>
#include <vector>
using namespace std;
int main(){
    vector <int> v;
    int number;
    int chaco ;
    cin>>chaco;
    while (cin >> number) {
        v.push_back(number);
    }
   
    for (int i = 0; i < v.size(); i++)
    {
        if (v[i]==chaco)
        {
            cout<<"Yes found";
        }
        
        
    }
    
    return 0;
}