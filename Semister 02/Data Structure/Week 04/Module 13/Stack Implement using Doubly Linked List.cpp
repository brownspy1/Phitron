// Created by M.Mahadi on 2024-08-18 Time:18-47-58
#include <iostream>
using namespace std;
class Node
{
public:
    Node *prev;
    int value;
    Node *next;
    Node(int value)
    {
        this->prev = NULL;
        this->value = value;
        this->next = NULL;
    }
};
class myStack
{
private:
    Node *Head = NULL;
    Node *Tail = NULL;
    int count = 0;

public:
    void push(int value)
    {
        Node *newNode = new Node(value);
        count++;
        if (Head == NULL)
        {
            Head = newNode;
            Tail = newNode;
            return;
        }
        Tail->next = newNode;
        newNode->prev = Tail;
        Tail = newNode;
    }
    int top()
    {
        return Tail->value;
    }
    void pop()
    {
        count--;
        Node *Deleted = Tail;
        Tail = Tail->prev;
        if (Tail != NULL)
        {
            Tail->next = NULL;
        }
        else
        {
            Head = NULL;
        }

        delete Deleted;
    }
    int size()
    {
        return count;
    }
    bool empty()
    {
        if (count == 0)
            return true;
        else
            return false;
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

    while (!stack.empty())
    {
        cout << stack.top() << endl;
        stack.pop();
    }

    return 0;
}