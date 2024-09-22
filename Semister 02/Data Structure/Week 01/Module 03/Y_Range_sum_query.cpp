// Created by M.Mahadi on 2024-07-08 00:07:57
#include <iostream>
#include <vector>
using namespace std;
int main(){
    int n,x;
    vector <int> v(n);
    cin>>n>>x;
    for (int i = 0; i < n; i++)
    {
        cin>>v[i];
    }
    while (x--)
    {
        int a,b;
        cin>>a>>b;.
        int calculate = 0;
        for (int i = a-1; i < b; i++)
        {
            calculate +=v[i];
        }
        cout<<calculate<<endl;
    }
    
    return 0;
}