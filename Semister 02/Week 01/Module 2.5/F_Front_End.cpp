// Created by M.Mahadi on 2024-07-07 22:30:24
#include <iostream>
#include <vector>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector <int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin>>v[i];
    }
    int font = 0,back = n-1;
    for (; font <= back; font++)
    {
        if (font == back)
        {
            cout<<v[font]<<" ";
        }else
        {
            cout<<v[font]<<" "<<v[back]<<" ";
        }
        back--;
        
    }
    
    
    return 0;
}