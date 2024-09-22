// Created by M.Mahadi on 2024-07-06 00:20:13
#include <iostream>
using namespace std;
int main(){
    int n = 15;
    for (int i = 1; i <= n; i++) // O(N)
    {
        int x = i;
        while (x>0) //O(logN)
        {
            int dig = x%10;
            cout<<dig<<" ";
            x=x/10;
        }
        cout<<endl;
    }
    
    return 0;
}