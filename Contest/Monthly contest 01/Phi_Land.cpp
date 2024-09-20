// Created by M.Mahadi on 2024-09-20 Time:21-14-19
#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
using namespace std;
int main(){
    string name;
    cin>>name;
    vector<char> v;
    for (auto &&i : name)
    {
        if (i >='A' && i<='Z')
        {
            char x = i+32;
            v.push_back(x);
        }else
        {
            v.push_back(i);
        }
        
        
    }
    reverse(v.begin(),v.end());
    for (char i : v)
    {
        cout<<i;
    }
    
    
    return 0;
}