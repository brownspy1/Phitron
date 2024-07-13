// Created by M.Mahadi on 2024-05-24 20:01:45
#include <iostream>
using namespace std;
int main()
{
    long long int n, m;
    cin >> n >> m;
    long long int mul = n * m;
    long long int add = n + m;
    long long int sub = n - m;
    cout << n << " + " << m << " = " << add << endl;
    cout << n << " * " << m << " = " << mul << endl;
    cout << n << " - " << m << " = " << sub << endl;
}