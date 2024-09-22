// Created by M.Mahadi on 2024-07-06 00:14:20
#include <iostream>
using namespace std;
int main(){
    // for (int i = 1; i <= 10; i++) //O(N*N)
    // {
    //     for (int j = 1; j <= 10; j++)
    //     {
    //         cout<<i<<" "<<j<<endl;
    //     }
        
    // }
    int ar[10] = {5,8,2,6,4,7,9,0,3,1};
    for (int i = 0; i < 9; i++) //O(N*N)
    {
        for (int j = i+1; j < 10; j++)
        {
            if (ar[i]>ar[j])
            {
               swap(ar[i],ar[j]);
            }
            
        }
        
    }
    for (int i = 0; i < 10; i++)
    {
        cout<<ar[i]<<" ";
    }
    
    return 0;
}