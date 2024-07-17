// Created by M.Mahadi on 2024-07-17 Time:21-01-12
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
void input(Node *&Head, int value, Node *&Tail)
{
    Node *NewNode = new Node(value);
    if (Head == NULL)
    {
        Head = NewNode;
        Tail = NewNode;
        return;
    }

    Tail->next = NewNode;
    Tail = NewNode;
}
void print(Node *head)
{
    Node *Temp = head;
    for (Node *i = Temp; i != NULL; i = i->next)
    {
        cout << i->value << " ";
    }
}
void remove_duplicat(Node *Head)
{
    Node *Temp = Head;
    for (Node *i = Temp; i != NULL; i = i->next)
    {
        /* code */
    }
}
int main()
{
    Node *Head = NULL;
    Node *Tail = NULL;
    int value;
    while (true)
    {
        cin >> value;
        if (value == -1)
            break;
        input(Head, value, Tail);
    }
    return 0;
}