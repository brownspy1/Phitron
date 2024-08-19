// Created by M.Mahadi on 2024-08-19 Time:17-41-05
#include <iostream>
using namespace std;
class Node
{
public:
    int value;
    Node *next;

    Node(int value)
    {
        this->value = value;
        this->next = NULL;
    }
};
class myQueue
{
private:
    Node *Head = NULL;
    Node *Tail = NULL;
    int cnt = 0;

public:
    void push(int v)
    {
        cnt++;
        Node *newNode = new Node(v);
        if (Head == NULL)
        {
            Head = newNode;
            Tail = newNode;
            return;
        }
        Tail->next = newNode;
        Tail = newNode;
    }
    void pop()
    {
        cnt--;
        Node *Deleted = Head;
        Head = Head->next;
        delete Deleted;
        if (Head->next == NULL)
            Tail = NULL;
    }
    int front()
    {
        return Head->value;
    }
    int size()
    {
        return cnt;
    }
    bool empty()
    {
        if (cnt == 0)
            return true;
        else
            return false;
    }
};
int main()
{
    myQueue q;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        q.push(x);
    }
    while (!q.empty())
    {
        cout << q.front() << endl;
        q.pop();
    }

    return 0;
}