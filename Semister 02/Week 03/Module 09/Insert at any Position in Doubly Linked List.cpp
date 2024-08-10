// Created by M.Mahadi on 2024-08-11 Time:00-51-39
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
int count(Node *Tail)
{
    int count = 0;
    while (Tail != NULL)
    {
        count++;
        Tail = Tail->prev;
    }
    return count;
}
void insert_at_head(Node *&Head, int value)
{
    Node *NewNode = new Node(value);
    if (Head == NULL)
    {
        Head = NewNode;
        return;
    }
    NewNode->next = Head;
    Head = NewNode;
    Head->next->prev = Head;
}
void insert_any_position(Node *&Head, int value, int position)
{
    Node *NewNode = new Node(value);
    Node *Temp = Head;
    if (position == 0)
    {
        insert_at_head(Head, value);
        return;
    }
    for (int i = 0; i < position - 1; i++)
    {
        Temp = Temp->next;
    }
    NewNode->next = Temp->next;
    Temp->next = NewNode;
    NewNode->next->prev = NewNode;
    NewNode->prev = Temp;
}
void insert_at_tail(Node *Head, int Value)
{
    cout << "Under maintenance" << endl;
}
int main()
{
    Node *Head = new Node(10);
    Node *a = new Node(20);
    Node *b = new Node(30);
    Node *c = new Node(40);
    Node *Tail = c;
    // connection
    Head->next = a;
    a->prev = Head;

    a->next = b;
    b->prev = a;

    b->next = c;
    c->prev = b;

    print(Head);
    int num = count(Tail);
    int position, value;
    cin >> position >> value;
    if (position == num)
    {
        insert_at_tail(Head, value);
    }
    else
    {
        insert_any_position(Head, value, position);
    }
    print(Head);
    reverse(Tail);
    return 0;
}