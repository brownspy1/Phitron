// Vector Capacity Functions
//  Created by M.Mahadi on 2024-07-07 16:14:32
#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> v;
    // Initialize a Vector
    for (int i = 1; i <= 10; i++)
    {
        v.push_back(i);
    }
    //Print Initial Vector Properties:
    cout << "Vector size - " << v.size() << endl
         << "Vector Max Size - " << v.max_size() << endl
         << "Vector capacity - " << v.capacity() << endl;

    // Resize the Vector
    v.resize(20,0);
    cout << "Vector size - " << v.size() << endl
         << "Vector capacity - " << v.capacity() << endl;

    //Clear the Vector
    v.clear();
    cout << "Vector size - " << v.size() << endl
         << "Vector capacity - " << v.capacity() << endl;

    //Check if the Vector is Empty
    if (v.empty())
    {
        cout<<"This is an Empty vector"<<endl;
    }else
    {
        cout<<"This is not an Empty Vector"<<endl;
    }
    

    //Resize to Original Size:
    v.resize(10,100);
    cout << "Vector size - " << v.size() << endl
         << "Vector capacity - " << v.capacity() << endl;

    for (auto &&i : v)
    {
        cout<<i<<" ";
    }
    
    return 0;
}