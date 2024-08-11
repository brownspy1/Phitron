// Created by M.Mahadi on 2024-08-11 Time:18-12-53
#include <iostream>
using namespace std;
class Node
{
public:
    Node *prev;
    int value;
    Node *Next;

    Node(int value)
    {
        this->prev = NULL;
        this->value = value;
        this->Next = NULL;
    }
};
void print(Node *Head)
{
    while (Head != NULL)
    {
        cout << Head->value << " ";
        Head = Head->Next;
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
int count(Node *Head)
{
    int count = 0;
    while (Head != NULL)
    {
        count++;
        Head = Head->Next;
    }
    return count;
}
void delete_at_head(Node *&Head);
void delete_at_Tail(Node *&Tail);
void delete_at_position(Node *&Head, Node *&Tail, int Position);

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
    int pos;
    cin >> pos;
    if (pos >= count(Head) || pos < 0)
    {
        cout << "Invalid position" << endl;
    }
    else
    {
        delete_at_position(Head, Tail, pos);
    }

    print(Head);
    reverse(Tail);
    return 0;
}
void delete_at_head(Node *&Head)
{
    if (Head == NULL)
    {
        cout << "This list are empty";
        return;
    }
    Node *deleted = Head;
    Head = Head->Next;
    Head->prev = NULL;
    delete deleted;
}
void delete_at_Tail(Node *&Tail)
{
    if (Tail == NULL)
    {
        cout << "This list are empty";
        return;
    }
    Node *Deleted = Tail;
    Tail = Tail->prev;
    delete Deleted;
    Tail->Next = NULL;
}
void delete_at_position(Node *&Head, Node *&Tail, int Position)
{

    if (Position == 0)
    {
        delete_at_head(Head);
    }
    else if (Position == count(Head) - 1)
    {
        delete_at_Tail(Tail);
    }
    else
    {
        Node *Temp = Head;
        for (int i = 0; i < Position - 1; i++)
        {
            Temp = Temp->Next;
        }
        Node *deleted = Temp->Next;
        Temp->Next = Temp->Next->Next;
        Temp->Next->prev = Temp;
        delete deleted;
    }
}