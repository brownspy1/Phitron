// Created by M.Mahadi on 2024-06-12 21:29:32
#include <iostream>
using namespace std;
class user
{
public:
    string name;
    int age;
    user(string name, int age)
    {
        this->name = name;
        this->age = age;
    }
};
int main()
{
    user *mahadi = new user("mahadi", 18);
    user *munnah = new user("Mahir", 5);
    // *mahadi = *munnah;
    mahadi->name = munnah->name;
    mahadi->age = munnah->age;
    delete munnah;
    cout << mahadi->name << " " << mahadi->age << endl;
    return 0;
}