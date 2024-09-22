// Created by M.Mahadi on 2024-07-06 15:24:14
#include <iostream>
#include <vector>
using namespace std;
int main(){
    int n= 5;
    int x = 3;
    int *arry = new int[x];
    int *big = new int[n];
    int ar[n] = {10,2,54,60,8};
    int r[x] = {10,2,54};
    for (int i = 0; i < n; i++)
    {
        big[i]=ar[i];
    }
    
    for (int i = 0; i < x; i++)
    {
        arry[i]=r[i];
    }
    int *newarry = new int[x*3];
    for (int i = 0; i < x; i++)
    {
        newarry[i]=arry[i];
    }
    delete[] arry;
    for (int i = 0; i < x*3; i++)
    {
        newarry[i+x]=big[i];
    }
    
    
    for (int i = 0; i < n+x; i++)
    {
        cout<<newarry[i]<<" ";
    }
    

    
    delete[] newarry;
    delete[] big;
    return 0;
}