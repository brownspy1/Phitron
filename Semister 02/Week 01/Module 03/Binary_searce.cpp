// Created by M.Mahadi on 2024-07-08 16:38:27
#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int list[n];
    for (int i = 0; i < n; i++) //O(N)
    {
        cin>>list[i];
    }
    int find;
    cin>>find;
    int L= 0;
    int R= n-1;
    bool got = false;
    while (L<=R)
    {
        int Mid = (L+R)/2;
        if (list[Mid]==find)
        {
            got=true;
            break;
        }if (find>list[Mid])
        {
            L=Mid+1;
        }if (list[Mid]>find)
        {
            R=Mid-1;
        }

    }
    if (got)
    {
        cout<<"YES";
    }else
    {
        cout<<"NO";
    }
    
    
    return 0;
}