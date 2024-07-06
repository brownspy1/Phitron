// Created by M.Mahadi on 2024-07-06 23:32:07
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
    //replace
    // vector <int> v ={10,20,30,40,50,5,6,0,8,0,3,9,0};
    // replace(v.begin(),v.end(),0,55);
    // for (int i = 0; i < v.size(); i++)
    // {
    //     cout<<v[i]<<" ";
    // }
    vector <int> v ={10,20,30,40,50,5,6,0,8,0,3,9,0};
    // vector <int> ::iterator it;
    int x ;
    cin>>x;
    auto it = find(v.begin(),v.end(),x);
    if (it==v.end())
    {
        cout<<"Not Found!";
    }else
    {
        cout<<"Found"<<endl;
    }
    
    return 0;
}