#include <iostream>
#include <utility>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int arry[n + 1];
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arry[i] < arry[j])
            {
                swap(arry[i], arry[j]);
            }
        }
    }

    return 0;
}