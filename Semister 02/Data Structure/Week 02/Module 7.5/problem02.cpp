// Created by M.Mahadi on 2024-07-16 Time:21-15-35
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
void revarce(Node *Head)
{
    Node *Temp = Head;
    if (Temp == NULL)
        return;
    revarce(Temp->next);
    cout << Temp->value << " ";
}
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
    revarce(Head);
    return 0;
}