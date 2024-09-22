// Created by M.Mahadi on 2024-09-20 Time:21-42-06
#include <bits/stdc++.h>
using namespace std;
int chocolate(int peace)
{
    int allPack = peace; 
    int wrap = peace; 

    
    while (wrap >= 3) {
        int newPack = wrap / 3;
        allPack += newPack; 
        wrap = wrap % 3 + newPack; 
    }

    return allPack;

} 
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int taka;
        cin >> taka;
        int pic = taka/5;
        cout << chocolate(pic)<<endl;
    }

    return 0;
}

