// Created by M.Mahadi on 2024-09-14 Time:04-38-57
#include <bits/stdc++.h>
using namespace std;
char alfa[20][20];
int main(){
    int r,c;cin>>r>>c;
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            cin>>alfa[i][j];
        }
        
    }
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            if (i*j == 0)
            {
                cout<<i<<" "<<j<<endl;
            }
            
        }
        
    }
    
    return 0;
}