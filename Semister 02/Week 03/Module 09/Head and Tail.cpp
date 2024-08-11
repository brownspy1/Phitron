// Created by M.Mahadi on 2024-08-11 Time:16-53-44
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
    cout << endl;
}
void reverse(Node *Tail)
{
    while (Tail != NULL)
    {
        cout << Tail->value << " ";
        Tail = Tail->prev;
    }
    cout << endl;
}
void insert_at_head(Node *&Head, Node *&Tail, int Value)
{
    Node *NewNode = new Node(Value);
    if (Head == NULL)
    {
        Head = NewNode;
        Tail = NewNode;
        return;
    }
    NewNode->next = Head;
    Head->prev = NewNode;
    Head = NewNode;
}
void insert_at_tail(Node *&Head, Node *&Tail, int value)
{
    Node *NewNode = new Node(value);
    if (Head == NULL)
    {
        insert_at_head(Head, Tail, value);
        return;
    }
    Tail->next = NewNode;
    NewNode->prev = Tail;
    Tail = NewNode;
};
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
        insert_at_tail(Head, Tail, value);
    }

    // int value, position;
    // cin >> value, position;
    // insert_at_tail(Head, Tail, value);
    print(Head);
    reverse(Tail);
    return 0;
}