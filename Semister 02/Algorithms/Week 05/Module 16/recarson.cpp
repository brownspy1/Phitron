// Created by M.Mahadi on 2024-10-01 Time:23-45-21
#include <bits/stdc++.h>
using namespace std;
int fun(int n){
    if (n == 10) return 0;
    cout<<n<<endl;
    fun(n+1);
    
}
int main(){
    fun(1);
    return 0;
}