// Created by M.Mahadi on 2024-09-14 Time:05-52-41
#include <bits/stdc++.h>
using namespace std;
vector<pair<int, int>> eageList;
int n, e;
int main()
{
    cin>>n>>e;
    for (int i = 0; i < e; i++)
    {
         int a, b;cin>>a>>b;
        eageList.push_back({a,b});
    }
    
    int q;cin>>q;
    while (q--)
    {
        bool flag = false;  
        int x,y;
        cin>>x>>y;
        for (int i = 0; i < e; i++)
        {
            if (eageList[i].first == x && eageList[i].second == y)
            {
                flag = true;
                break;
            }else if (eageList[i].first == x && eageList[i].first == y)
            {
                flag = true;
                break;
            }else if (eageList[i].second == x && eageList[i].second == y)
            {
                flag = true;
                break;
            }
            
            

        }
        if (flag)
        {
            cout<<"YES"<<endl;
        }else cout<<"NO"<<endl;

    }

    

    return 0;
}
