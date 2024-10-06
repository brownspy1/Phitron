// Created by M.Mahadi on 2024-10-05 Time:21-29-55
#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;cin>>n;
    for (int i = 1; i <= n; i++){
        for (int j = 1; j <= n; j++){
                if (j == 1) cout<<'|';
                if ((i+j)%2==0) cout<<"⬜";
                else cout<<"⬛";
                if (j==n) cout<<"|";
                
            }cout<<endl;
         }
    return 0;
}