// Created by M.Mahadi on 2024-06-09 08:18:57
#include <iostream>
using namespace std;
int main()
{
    string n = " mahadi";      // normal string
    string n(" mahadi");       // normal string
    string n("I love me!", 6); // get string {6} char I love
    string text = " Hay hello mahadi what are you doing now!";
    string n(text, 10); // remove 10 character from font
    string n(10, 'M');  // print 10 M in consol
    cout << n << endl;
    return 0;
}