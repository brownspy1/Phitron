// Created by M.Mahadi on 2024-10-01 Time:23-45-21
#include <bits/stdc++.h>
using namespace std;
int fun(int n){
    if (n == 0) return 0;
    fun(n-1);
    cout<<n<<endl;
    
}
int main(){
    fun(10);
    return 0;
}