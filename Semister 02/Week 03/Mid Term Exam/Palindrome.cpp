// Created by M.Mahadi on 2024-08-17 Time:00-32-37
#include <iostream>
// #include <algorithm>
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
void insert_at_tail(Node *&Head, Node *&Tail, int val)
{
    Node *newNode = new Node(val);
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

void palindrome(Node *Head, Node *Tail)
{
    Node *I = Head;
    Node *J = Tail;
    bool flag = true;
    while (I != J && I->next != J)
    {
        if (I->value != J->value)
        {
            flag = false;
            break;
        }
        I = I->next;
        J = J->prev;
    }
    if (I->value != J->value)
    {
        flag = false;
    }
    if (flag)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }
}
int main()
{
    Node *Head = NULL;
    Node *Tail = NULL;
    while (true)
    {
        int val;
        cin >> val;
        if (val == -1)
            break;
        insert_at_tail(Head, Tail, val);
    }
    palindrome(Head, Tail);

    return 0;
}