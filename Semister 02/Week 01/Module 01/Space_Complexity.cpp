// Created by M.Mahadi on 2024-07-06 13:12:57
#include <iostream>
using namespace std;
int main(){
    int a = 10;// Space Complexity is O(1)
    int n;
    cin>>n;
    int arry[n]; //Space Complexity is O(N)
    for (int i = 0; i < n; i++) // time complexity is O(N)
    {
        cin>>arry[i];
    }
    
    return 0;
}