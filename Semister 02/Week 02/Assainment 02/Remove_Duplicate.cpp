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

void remove_duplicates(Node *Head)
{
    Node *Temp = Head;
    while (Temp != NULL)
    {
        Node *cout = Temp;
        while (cout->next != NULL)
        {
            if (Temp->value == cout->next->value)
            {
                Node *Deleted = cout->next;
                cout->next = cout->next->next;
                delete Deleted;
            }
            else
            {
                cout = cout->next;
            }
        }
        Temp = Temp->next;
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
    remove_duplicates(Head);
    print(Head);
    return 0;
}
