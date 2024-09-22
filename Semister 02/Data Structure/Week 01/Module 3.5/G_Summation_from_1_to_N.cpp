// Created by M.Mahadi on 2024-07-11 19:50:34
#include <iostream>
#include <stdint.h>
using namespace std;
int main(){
    long long int n;
    cin>>n;
    long long int sum = n*(n+1)/2;
    printf("%lld",sum);
    return 0;
}