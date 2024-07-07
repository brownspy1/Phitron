// Created by M.Mahadi on 2024-07-07 16:25:41
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector <int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin>>v[i];
    }
    int value,replace_value;
    cin>>value>>replace_value;
    replace(v.begin(),v.end(),value,replace_value);
    for (auto &&i : v)
    {
        cout<<i<<" ";
    }
    cout<<endl;
    int x;
    cin>>x;
    auto it = find(v.begin(),v.end(),x);
    int c = it-v.begin();
    int m = *v.begin();
    cout<<c<<" "<<*it<<" "<<*v.begin()<<" "<<it-v.begin();

    return 0;
}