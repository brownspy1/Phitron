// Created by M.Mahadi on 2024-07-11 19:21:15
#include <iostream>
#include <algorithm>
using namespace std;
int main(){
    int count;
    cin>>count;
    int is_array[count];
    for (int i = 0; i < count; i++)
    {
        cin>>is_array[i];
    }
    sort(is_array,is_array+count);
    int n ;
    cin>>n;
    while (n--)
    {
        int x;
        cin>>x;
        int L = 0,R = count-1;
        bool flag = false;
        while (L<=R)
        {
            int Mid = (L+R)/2;
            if (is_array[Mid] == x)
            {
                flag = true;
                break;
            }
            else if (x<is_array[Mid])
            {
                R = Mid-1;
            }
            else if (x>is_array[Mid])
            {
                L = Mid+1;
            }
            
        }
        if (flag)
        {
            cout<<"YES"<<endl;
        }else
        {
            cout<<"NO"<<endl;
        }
        
        
        
    }
    
    return 0;
}