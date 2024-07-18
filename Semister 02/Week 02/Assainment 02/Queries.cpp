// Created by M.Mahadi on 2024-07-18 Time:10-48-43
/*
1.Insart at head
2.Insert at tail
3.Delete from position
*/
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
        if (Tail == NULL)
        {
            Tail = NewNode;
        }
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
    if (Tail == NULL)
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

void deleted(Node *&Head, int position)
{
    if (Head == NULL)
        return;
    if (position == 0)
    {
        Node *Deleted = Head;
        Head = Head->next;
        delete Deleted;
    }
    else
    {
        for (int i = 1; i < position; i++)
        {
        }
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
    int n;
    cin >> n;
    while (n--)
    {
        int ask, value;
        cin >> ask >> value;
        if (ask == 0)
        {
            Insert_at_head(Head, Tail, value);
            print(Head);
        }
        else if (ask == 1)
        {
            insert_at_Tail(Head, Tail, value);
            print(Head);
        }
        else if (ask == 2)
        {
            if (count(Head) < value)
            {
                deleted(Head, value);
                print(Head);
            }
            else
            {
                print(Head);
            }
        }
    }

    return 0;
}