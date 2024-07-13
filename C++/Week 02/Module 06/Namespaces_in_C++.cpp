// Created by M.Mahadi on 2024-06-12 21:52:35
#include <iostream>
using namespace std;
namespace mst
{
    string mahadi = "My name in mahadi \nand my home town is Barisal";
    void Mari()
    {
        cout << "this is from name space" << endl;
    }
}
int main()
{
    cout << mst::mahadi << endl;
    mst::Mari();
    return 0;
}