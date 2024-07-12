// Created by M.Mahadi on 2024-07-11 23:24:57
#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int array[n];
    for (int i = 0; i < n; i++)
    {
        cin>>array[i];
    }
    
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum+=array[i];
    }
    int pre_sum = 0;
    for (int i = 0; i < n; i++)
    {
        int left = pre_sum;
        int right = sum-pre_sum-array[i];
        if (left == right)
        {
            cout<<i<<endl;
            break;
        }
        pre_sum += array[i];
    }
    

    return 0;
}