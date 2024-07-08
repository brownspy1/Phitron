// Created by M.Mahadi on 2024-07-08 22:23:59
#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int mid = n/2;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i==j && j==mid)
            {
                cout<<"X";
            }else if (i==j)
            {
                cout<<"\\";
            }else if (j==n-1-i)
            {
                cout<<"/";
            }else
            {
                cout<<" ";
            }
            
        }
        cout<<endl;
    }
    
    return 0;
}
