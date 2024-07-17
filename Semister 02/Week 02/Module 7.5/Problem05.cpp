// Created by M.Mahadi on 2024-07-17 Time:12-14-52
/*Take a singly linked list as input and
sort it in descending order. Then print the list.*/

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
void Sort(Node *Head)
{
    Node *Temp = Head;
    for (Node *i = Temp; i->next != NULL; i = i->next)
    {
        for (Node *j = i->next; j != NULL; j = j->next)
        {
            if (i->value < j->value)
            {
                swap(i->value, j->value);
            }
        }
    }
}
void print(Node *Head)
{
    Node *Temp = Head;
    for (Node *i = Temp; i != NULL; i = i->next)
    {
        cout << i->value << " ";
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
    Sort(Head);
    print(Head);
    return 0;
}