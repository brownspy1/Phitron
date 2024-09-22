// Created by M.Mahadi on 2024-07-05 22:21:05
#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    // for (; n>=1; n/=2) // O(logN)
    // {
    //     cout<<n<<endl;
    // }
    
    while (n>=1) // O(logN)
    {
        cout<<n<<endl;
        n = n/2;
    }
    
   
    
    return 0;
}