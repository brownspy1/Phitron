// Created by M.Mahadi on 2024-07-11 00:03:00
// acchiving O(logN)
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
    int find;
    cin>>find;
    int L = 0,R=n-1;
    while (L<=R)
    {
        int Mid = (L+R)/2;
        if (list[Mid]==find)
        {
            if (list[Mid+1] == find || list[Mid-1] == find)
            {
                flag = true;
                break;
            }
            break;
            
        }else if (find<list[Mid])
        {
            R = Mid-1;
        }else if (find>list[Mid])
        {
            L=Mid+1;
        }
        
        
        
    }
    if (flag)
    {
        cout<<"True";
    }else
    {
        cout<<"False";
    }
    
    
    

    return 0;
}