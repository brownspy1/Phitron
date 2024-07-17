// Created by M.Mahadi on 2024-07-17 Time:12-43-50
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
void finding(Node *Head, int value)
{
    Node *Temp = Head;
    int index = 0;
}
int main()
{
    int count;
    cin >> count;
    for (int i = 0; i < count; i++)
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
    }

    return 0;
}