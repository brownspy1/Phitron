// Created by M.Mahadi on 2024-07-11 00:26:42
#include <iostream>
using namespace std;
int main(){
    int count;
    cin>>count;
    int array[count];
    for (int i = 0; i < count; i++)
    {
        array[i] = i;
    }
    
    int prefix[count];
    prefix[0] = array[0];
    for (int i = 1; i < count; i++)
    {
        prefix[i] = prefix[i-1]+array[i];
    }
    
    for (int i : prefix)
    {
        cout<<i<<" ";
    }
    
    return 0;
}