// Created by M.Mahadi on 2024-08-15 Time:21-33-12
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
void insert(Node *&Head, Node *&Tail, int value);
void reverse(Node *Head, Node *Tail);
void print(Node *Head);
int main()
{
    Node *Head = NULL;
    Node *Tail = NULL;

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
    reverse(Head, Tail);
    print(Head);
    return 0;
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
void reverse(Node *Head, Node *Tail)
{
    Node *i = Head;
    Node *j = Tail;
    while (i != j && i->next != j)
    {
        swap(i->value, j->value);
        i = i->next;
        j = j->prev;
    }
    swap(i->value, j->value);
}
void print(Node *Head)
{
    while (Head != NULL)
    {
        cout << Head->value << " ";
        Head = Head->next;
    }
};