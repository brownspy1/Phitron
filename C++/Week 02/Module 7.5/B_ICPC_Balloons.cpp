// Created by M.Mahadi on 2024-06-15 03:21:42
#include <iostream>
#include <string>
using namespace std;
int main()
{
    int m;
    cin >> m;
    for (int j = 0; j < m; j++)
    {
        int n;
        cin >> n;
        string Text;
        cin >> Text;
        int fr[26] = {0};
        for (char C : Text)
        {
            if (fr[C - 'A'] == 0)
            {
                fr[C - 'A'] += 2;
            }
            else
            {
                fr[C - 'A']++;
            }
        }
        int count = 0;
        for (int i = 0; i < 26; i++)
        {
            if (fr[i] != 0)
            {
                count += fr[i];
            }
        }
        cout << count << endl;
    }

    return 0;
}
