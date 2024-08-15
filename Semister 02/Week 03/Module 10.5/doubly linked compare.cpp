// Created by M.Mahadi on 2024-08-15 Time:21-12-09
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
void print(Node *Head)
{
    while (Head != NULL)
    {
        cout << Head->value << " ";
        Head = Head->next;
    }
}
void reverse(Node *Tail)
{
    while (Tail != NULL)
    {
        cout << Tail->value << " ";
        Tail = Tail->prev;
    }
}
void insert(Node *&Head, Node *&Tail, int value)
{
    Node *NewNode = new Node(value);
    if (Head == NULL)
    {
        Head = NewNode;
        Tail = NewNode;
        return;
    }
    Tail->next = NewNode;
    NewNode->prev = Tail;
    Tail = NewNode;
};
int count(Node *Head)
{
    int count = 0;
    while (Head != NULL)
    {
        count++;
        Head = Head->next;
    }
    return count;
};
bool same(Node *Head, Node *Head1)
{
    if (count(Head) != count(Head1))
    {
        return false;
    }
    while (Head->value != Head1->value)
    {
        return false;
    }
};
int main()
{
    Node *Head = NULL;
    Node *Tail = NULL;
    Node *Head1 = NULL;
    Node *Tail1 = NULL;

    while (true)
    {
        int value;
        cin >> value;
        if (value == -1)
        {
            break;
        }
        insert(Head, Tail, value);
    }
    while (true)
    {
        int value;
        cin >> value;
        if (value == -1)
        {
            break;
        }
        insert(Head1, Tail1, value);
    }
    if (same(Head, Head1))
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }

    return 0;
}