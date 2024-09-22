// Created by M.Mahadi on 2024-07-07 23:05:28
#include <iostream>
#include <vector>
using namespace std;
int main(){
    string c;
    cin>>c;
    vector <int> freq(26,0);
    for (int x:c)
    {
        freq[x-'a']++;
    }
    
    for (int i = 0; i < 26; i++)
    {
        if (freq[i]!=0)
        {
            cout<<char(i+'a')<<" : "<<freq[i]<<endl;
        }
        
    }
    
    
    
    return 0;
}