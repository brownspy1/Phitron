// Created by M.Mahadi on 2024-07-06 18:48:56
#include <iostream>
#include <vector>
using namespace std;
int main(){
    vector <int> v = {10,50,20,60,98};
    vector <int> v2 = {5,10,15,20,25};
    v.erase(v.begin()+1,v.end()-1);
    // v.insert(v.begin()+2,v2.begin(),v2.end());
    for (int c:v)
    {
        cout<<c<<" ";
    }

    return 0;
}