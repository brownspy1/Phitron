// Created by M.Mahadi on 2024-08-10 Time:21-11-18
#include <iostream>
using namespace std;
class Node
{
public:
    Node *prev;
    int Value;
    Node *Next;
    Node(int value)
    {
        this->prev = NULL;
        this->Value = value;
        this->Next = NULL;
    }
};
void print(Node *Head)
{
    Node *temp = Head;
    while (temp != NULL)
    {
        cout << temp->Value << " ";
        temp = temp->Next;
    }
}
void reverse(Node *Tail)
{
    Node *temp = Tail;
    while (temp != NULL)
    {
        cout << temp->Value << " ";
        temp = temp->prev;
    }
}
int main()
{
    Node *Head = new Node(10);
    Node *a = new Node(20);
    Node *b = new Node(30);
    Node *c = new Node(40);

    Head->Next = a;
    a->prev = Head;

    a->Next = b;
    b->prev = a;

    b->Next = c;
    c->prev = b;

    Node *Tail = c;
    print(Head);
    cout << endl;
    reverse(Tail);

    return 0;
}
