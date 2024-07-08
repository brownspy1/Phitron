// Created by M.Mahadi  on 2024-07-08 21:06:25
#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int list[n];
    for (int i = 0; i < n; i++)
    {
        cin>>list[i];
    }
    bool flag = false;
    for (int i = 0; i < n-1; i++)
    {
        for (int j = i+1; j < n; j++)
        {
            if (list[i]==list[j])
            {
                flag = true;
            }
            
        }
        
    }
    if (flag)
    {
        cout<<"YES";
    }else
    {
        cout<<"NO";
    }

    return 0;
}