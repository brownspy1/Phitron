// Created by M.Mahadi on 2024-10-02 Time:16-51-38
#include <bits/stdc++.h>
using namespace std;
int fact(int n){
    if (n == 0) return 1;
    int x = fact(n-1);
    return x*n;
    
}
int main(){
    cout<<fact(5);
    return 0;
}