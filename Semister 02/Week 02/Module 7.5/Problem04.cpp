// Created by M.Mahadi on 2024-07-17 Time:12-00-58
/*Take a singly linked list as input,
Then print the maximum value of them.*/
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
void find_big(Node *Head)
{
    Node *temp = Head;
    int min = -35689;
    for (Node *i = temp; i != NULL; i = i->next)
    {

        if (i->value > min)
        {
            min = i->value;
        }
    }
    cout << min;
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
    find_big(Head);
    return 0;
}
