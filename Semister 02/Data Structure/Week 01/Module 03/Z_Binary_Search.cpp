// Created by M.Mahadi on 2024-07-08 17:06:35
#include <iostream>
#include <algorithm>
using namespace std;
int main(){
    int n,m;
    cin>>n>>m;
    int list[n];
    for (int i = 0; i < n; i++)
    {
        cin>>list[i];
    }
    sort(list,list+n);
    while (m--)
    {
        int find;
        cin>>find;
        int L=0;
        int R = n-1;
        bool flag = false;
        while (L<=R)
        {
            int mid = (L+R)/2;
            if (list[mid]==find)
            {
                flag=true;
                break;
            }
            if (find>list[mid])
            {
                L = mid+1;
            }
            if (find<list[mid])
            {
                R = mid-1;
            }
            

        }
        if (flag) cout<<"found"<<endl;
        else cout<<"not found"<<endl;
        
        

    }
   
    
    return 0;
}
