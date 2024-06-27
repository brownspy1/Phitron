// Created by M.Mahadi on 2024-06-27 22:20:48
#include <iostream>
#include <sstream>
using namespace std;
int main(){
    string name;
    getline(cin,name);
    stringstream ss(name);
    string signal;
    bool flag = false;
    while (ss>>signal)
    {
        if (signal == "Jessica")
        {
            flag = true;
            break;
        }
    }
    if (flag)
    {
        cout<<"YES";
    }else
    {
        cout<<"NO";
    }
    
    
    return 0;
}