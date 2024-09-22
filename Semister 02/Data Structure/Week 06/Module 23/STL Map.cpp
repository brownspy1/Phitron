// Created by M.Mahadi on 2024-09-07 Time:10-56-33
#include <bits/stdc++.h>
using namespace std;
int main()
{
    map<string, int> dictionary;
    dictionary.insert({"Mahadi", 743678});
    dictionary["Random"] = 743546;
    dictionary.insert({"Saikat", 743625});
    dictionary.insert({"Nadim", 743679});
    dictionary.insert({"Diponkor", 743650});
    // for (auto &&i : dictionary)
    // {
    //     cout << i.first << " : " << i.second << endl;
    // }
    for (auto it = dictionary.begin(); it != dictionary.end(); it++)
    {
        cout << it->first << " : " << it->second << endl;
    }
    string name;
    cin >> name;
    if (dictionary.count(name))
    {
        cout << "Yes founde!" << " Name:" << name << " Roll:" << dictionary[name] << endl;
    }
    else
    {
        cout << "Not found!" << endl;
    }

    return 0;
}