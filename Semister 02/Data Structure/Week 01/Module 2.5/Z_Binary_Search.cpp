// Created by M.Mahadi on 2024-07-08 00:22:59
#include <iostream>
#include <vector>
using namespace std;
int main(){
    int n,m;
    cin>>n>>m;
    vector <int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin>>v[i];
    }
    
    while (m--)
    {
        int text;
        cin>>text;
        bool flag = false;
        for (int i = 0; i < n; i++)
        {
            if (v[i]==text)
            {
                flag = true;
            }
            
            
        }
        if (flag)
        {
            cout<<"found"<<endl;
        }else
        {
            cout<<"not found"<<endl;
        }
        
        
        
    }
    

    return 0;
}