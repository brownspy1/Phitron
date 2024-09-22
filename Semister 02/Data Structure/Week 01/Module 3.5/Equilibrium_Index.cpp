// Created by M.Mahadi on 2024-07-10 23:52:51
#include <iostream>
using namespace std;
int main(){
    int count;
    cin>>count;
    int array[count];
    for (int i = 0; i <count; i++)
    {
        cin>>array[i];
    }
    
    int sum = 0;

    for (int i = 0; i < count; i++)
    {
        sum += array[i];
    }

    int pr_sum=0;
    for (int i = 0; i < count; i++)
    {
      int left = pr_sum;
      int right = sum-pr_sum-array[i];
      if (left==right)
      {
        cout<<i<<endl;
        break;
      }
      pr_sum+=array[i];
        
    }
    
    
    
    return 0;
}