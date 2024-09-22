// Created by M.Mahadi on 2024-08-18 Time:16-23-33
#include <iostream>
#include <vector>
using namespace std;
class myStack
{
private:
    vector<int> myVector;

public:
    void push(int val)
    {
        myVector.push_back(val);
    }
    void pop()
    {
        myVector.pop_back();
    }
    int top()
    {
        return myVector.back();
    }
    int size()
    {
        return myVector.size();
    }
    bool empty()
    {
        return myVector.empty();
    }
};
int main()
{
    myStack stack;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        stack.push(x);
    }
    cout << "size of this stack:" << stack.size() << endl
         << endl;
    while (!stack.empty())
    {
        cout << stack.top() << endl;
        stack.pop();
    }

    return 0;
}