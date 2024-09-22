// Created by M.Mahadi on 2024-07-08 22:01:48
#include <iostream>
#include <vector>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector <int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    int count;
    cin>>count;
    vector <int> b(count);
    for (int i = 0; i < count; i++)
    {
        cin>>b[i];
    }
    int index;
    cin>>index;
    a.insert(a.begin()+index,b.begin(),b.end());
    for (int i : a)
    {
        cout<<i<<" ";
    }
    
    return 0;
}