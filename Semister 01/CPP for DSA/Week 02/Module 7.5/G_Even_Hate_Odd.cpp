// Created by M.Mahadi on 2024-06-25 09:40:51
#include <iostream>
using namespace std;
int main()
{
    int x;
    cin >> x;
    while (x--)
    {
        int n;
        cin >> n;
        int ar[n + 1];
        int odd = 0, even = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> ar[i];
        }
        for (int i = 0; i < n; i++)
        {
            if (ar[i] % 2 == 0)
            {
                even++;
            }
            else
            {
                odd++;
            }
        }
        if (n % 2 != 0)
            cout << "-1" << endl;
        else
        {
            int half = n / 2;
            int jor = even - half;
            int bijor = odd - half;

            if (jor < 0)
                jor = 0;
            if (bijor < 0)
                bijor = 0;
            cout << max(jor, bijor) << endl;
        }
    }

    return 0;
}