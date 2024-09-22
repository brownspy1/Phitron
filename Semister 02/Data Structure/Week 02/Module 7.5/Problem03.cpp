// Created by M.Mahadi on 2024-07-17 Time:11-44-01
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
int count(Node *head)
{
    Node *temp = head;
    int count = 0;
    for (Node *i = temp; i != NULL; i = i->next)
    {
        count++;
    }
    // while (temp != NULL)
    // {
    //     count++;
    //     temp = temp->next;
    // }

    return count;
}
void find_mid(Node *Head)
{
    int n = count(Head);
    Node *temp = Head;
    if (n % 2 == 0)
    {
        for (int i = 1; i < (n / 2); i++)
        {
            temp = temp->next;
        }
        cout << temp->value << " " << temp->next->value;
        return;
    }
    else
    {
        for (int i = 1; i <= (n / 2); i++)
        {
            temp = temp->next;
        }
        cout << temp->value;
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
    find_mid(Head);
    return 0;
}