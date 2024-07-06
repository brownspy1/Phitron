// Created by M.Mahadi on 2024-07-05 23:30:36
#include <iostream>
#include <cmath>
using namespace std;
int main(){
    int n;
    cin>>n;
    for (int i = 1; i <= sqrt(n); i++) //O(sqrtN)
    {
        if (n%i==0)
        {
            cout<<i<<" ";
            if(n/i!=i) cout<<n/i<<endl;
        }
        
        
        
        
    }
    
    return 0;
}
