// Created by M.Mahadi on 2024-07-18 Time:13-48-20
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
int count(Node *Head)
{
    Node *Temp = Head;
    int count = 0;
    while (Temp != NULL)
    {
        count++;
        Temp = Temp->next;
    }
    return count;
}

void Insert_at_head(Node *&Head, Node *&Tail, int Value)
{
    Node *NewNode = new Node(Value);
    if (Head == NULL)
    {
        Head = NewNode;
        Tail = NewNode;
    }
    else
    {
        NewNode->next = Head;
        Head = NewNode;
    }
}

void insert_at_Tail(Node *&Head, Node *&Tail, int Value)
{
    Node *NewNode = new Node(Value);
    if (Head == NULL)
    {
        Head = NewNode;
        Tail = NewNode;
    }
    else
    {
        Tail->next = NewNode;
        Tail = NewNode;
    }
}

void deleted(Node *&Head, Node *&Tail, int position)
{

    if (position == 0)
    {
        Node *Deleted = Head;
        Head = Head->next;
        delete Deleted;
        if (Head == NULL)
        {
            Tail = NULL;
        }
    }
    else
    {
        Node *Temp = Head;
        int pos = 1;
        while (Temp->next != NULL && pos < position)
        {
            Temp = Temp->next;
            pos++;
        }
        if (Temp->next == NULL)
            return;

        Node *Deleted = Temp->next;
        Temp->next = Temp->next->next;
        if (Temp->next == NULL)
        {
            Tail = Temp;
        }

        delete Deleted;
    }
}

void print(Node *Head)
{
    Node *Temp = Head;
    while (Temp != NULL)
    {
        cout << Temp->value << " ";
        Temp = Temp->next;
    }
    cout << endl;
}

int main()
{
    Node *Head = NULL;
    Node *Tail = NULL;
    int Q;
    cin >> Q;
    while (Q--)
    {
        int X, V;
        cin >> X >> V;
        if (X == 0)
        {
            Insert_at_head(Head, Tail, V);
            print(Head);
        }
        else if (X == 1)
        {
            insert_at_Tail(Head, Tail, V);
            print(Head);
        }
        else if (X == 2)
        {
            if (count(Head) > V)
            {
                deleted(Head, Tail, V);
            }
            print(Head);
        }
    }

    return 0;
}