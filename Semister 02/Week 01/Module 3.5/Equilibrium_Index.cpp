// Created by M.Mahadi on 2024-07-10 23:52:51
#include <iostream>
#include <vector>
using namespace std;
int main(){
    int count;
    cin>>count;
    int array[count];
    for (int i = 0; i <count; i++)
    {
        cin>>array[i];
    }
    
    int prefix[count];
    prefix[0]=array[0];
    for (int i = 1; i < count; i++)
    {
        prefix[i] = prefix[i-1]+array[i];
    }
    int head = prefix[0], tail = prefix[count-1];

    for (int i = 0; i < count; i++)
    {
        
    }
    
    
    
    return 0;
}