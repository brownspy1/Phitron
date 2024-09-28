#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        string s;
        cin >> s;
        int v=0,d=0,cn=0;
        for(char c : s)
        {
            if(c=='a' || c=='e' || c=='i' || c=='o' || c=='u')
                v++;
            else if(c>='0' && c<='9')
                d++;
            else
                cn++;
        }
        int bx_cn = cn/3;

        if(cn%3)
            bx_cn++;
        int bx_v = v/2;
        if(v%2)
            bx_v++;
        cout << max({d,bx_cn,bx_v}) << endl;
    }
}



