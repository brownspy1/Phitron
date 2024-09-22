// Created by M.Mahadi on 2024-06-27 00:30:25
#include <iostream>
#include <sstream>
#include <string>
using namespace std;
int main(){
    string n;
    cin.ignore();
    getline(cin,n);
    string x;
    cin>>x;
    int count = 0;
    stringstream ss(n);
    string word;
    while (ss>>word)
    {
        if (word==x)
        {
           count++;
        }
        
    }
    cout<<count;
    return 0;
}