// Created by M.Mahadi on 2024-06-25 13:55:22
#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    long long int N, n;
    cin >> N >> n;
    long long int cal = 0;
    for (int i = 2; i <= n; i += 2)
    {
        long long int pow = 1;
        for (int j = 1; j <= i; j++)
        {
            pow *= N;
        }
        cal += pow;
    }
    cout << cal << endl;

    return 0;
}
