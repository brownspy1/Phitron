// Created by M.Mahadi on 2024-09-20 Time:22-36-00
#include <bits/stdc++.h>
using namespace std;
#define __fast ios_base::sync_with_stdio(false); cin.tie(NULL);

int binary(long long int ar[],long long int src,long long int n){

    
    long long int L = 0;
    long long int R = n-1;
    long long int result = -1;
    while (L<=R)
    {
        long long int mid = (L+R)/2;
        if (ar[mid] >= src)
        {
            result = mid +1;
            R = mid-1;
        }else
        {
            L = mid+1;
        }

    }
    if (result == -1 && src>ar[n-1]) return -1;
    
    return result;
    

}
int main()
{
    __fast;
    long long int n;
    cin >> n;
    long long int num[n];
    for (long long int i = 0; i < n; i++)
    {
        long long int x;
        cin >> x;
        num[i] = x;
    }
    
    
    long long int prefix[n];
    prefix[0] = num[0];
    for (long long int i = 1; i < n; i++)
    {
        prefix[i] = num[i]+prefix[i-1];
    }
 
    
    long long int T;
    cin >> T;
    while (T--)
    {
        long long int src;cin>>src;
        cout<<binary(prefix,src,n)<<endl;
    }
    

    return 0;
}