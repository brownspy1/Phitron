// Created by M.Mahadi on 2024-08-12 Time:02-32-16
#include <iostream>
using namespace std;
class Node
{
public:
    Node *prev;
    int value;
    Node *Next;

    Node(int value)
    {
        this->prev = NULL;
        this->value = value;
        this->Next = NULL;
    }
};
void print(Node *Head);
void reverse(Node *Tail);
int count(Node *Head);
void insert(Node *&Head, Node *&Tail, int pos, int val);
void insert_at_head(Node *&Head, Node *&Tail, int val);
void insert_at_Tail(Node *&Head, Node *&Tail, int val);
void Deleted(Node *&Tail, Node *&Head, int pos);
void Deleted_head(Node *&Head);
void Deleted_tail(Node *&Tail);
// our main function
int main()
{
    Node *Head = NULL;
    Node *Tail = NULL;
    while (true)
    {
        int cos;
        cout << "1.Insert" << endl
             << "2.Insert at Head" << endl
             << "3.Insert at tail" << endl
             << "4.insert at any position" << endl
             << "5.Deleted from any position" << endl
             << "6.Print" << endl
             << "0.Exit" << endl
             << "Enter Your choice:";
        cin >> cos;
        if (cos == 1)
        {
            while (true)
            {
                int value;
                cin >> value;
                if (value == -1)
                    break;
                insert_at_Tail(Head, Tail, value);
            }
        }
        else if (cos == 2)
        {
            int value;
            cin >> value;
            insert_at_head(Head, Tail, value);
        }
        else if (cos == 3)
        {
            int val;
            cin >> val;
            insert_at_Tail(Head, Tail, val);
        }
        else if (cos == 4)
        {
            int value, pos;
            cin >> value >> pos;
            insert(Head, Tail, pos, value);
        }
        else if (cos == 5)
        {
            int pos;
            cin >> pos;
            Deleted(Tail, Head, pos);
        }
        else if (cos == 6)
        {
            print(Head);
            reverse(Tail);
        }
        else if (cos == 0)
        {
            break;
        }
    }

    return 0;
}
// print function
void print(Node *Head)
{
    while (Head != NULL)
    {
        cout << Head->value << " ";
        Head = Head->Next;
    }
    cout << endl;
};
// reverse print function
void reverse(Node *Tail)
{
    while (Tail != NULL)
    {
        cout << Tail->value << " ";
        Tail = Tail->prev;
    }
    cout << endl;
};
// size of full Doubly link list
int count(Node *Head)
{
    int count = 0;
    while (Head != NULL)
    {
        count++;
        Head = Head->Next;
    }
    return count;
};
// insert head function to insert a value in top of a Doubly link list
void insert_at_head(Node *&Head, Node *&Tail, int val)
{
    Node *newNode = new Node(val);
    if (Head == NULL)
    {
        Head = newNode;
        Tail = newNode;
        return;
    }
    newNode->Next = Head;
    Head->prev = newNode;
    Head = newNode;
};
// insert Tail function to insert a value in last of a Doubly
void insert_at_Tail(Node *&Head, Node *&Tail, int val)
{
    Node *newNode = new Node(val);
    if (Head == NULL)
    {
        Head = newNode;
        Tail = newNode;
        return;
    }
    Tail->Next = newNode;
    newNode->prev = Tail;
    Tail = newNode;
};

void insert(Node *&Head, Node *&Tail, int pos, int val)
{
    if (pos == 0)
    {
        insert_at_head(Head, Tail, val);
    }
    else if (pos == count(Head) - 1)
    {
        insert_at_Tail(Head, Tail, val);
    }
    else if (pos >= count(Head))
    {
        cout << "Invalid Position" << endl;
    }
    else
    {
        Node *newNode = new Node(val);
        Node *Temp = Head;
        for (int i = 0; i < pos - 1; i++)
        {
            Temp = Temp->Next;
        }
        newNode->Next = Temp->Next;
        newNode->Next->prev = newNode;
        Temp->Next = newNode;
        newNode->prev = Temp;
    }
};
void Deleted_head(Node *&Head)
{
    if (Head == NULL)
    {
        cout << "Head is empty!" << endl;
        return;
    }
    Node *Deleted = Head;
    Head = Head->Next;
    if (Head != NULL)
    {
        Head->prev = NULL;
    }
};
void Deleted_tail(Node *&Tail)
{
    if (Tail == NULL)
    {
        cout << "This is empty Tail";
        return;
    }
    Node *Deleted = Tail;
    Tail = Tail->prev;
    delete Deleted;
    if (Tail != NULL)
    {
        Tail->Next = NULL;
    }
};
void Deleted(Node *&Tail, Node *&Head, int pos)
{

    if (pos == 0)
    {
        Deleted_head(Head);
    }
    else if (pos == count(Head) - 1)
    {
        Deleted_tail(Tail);
    }
    else
    {
        Node *Temp = Head;
        for (int i = 0; i < pos - 1; i++)
        {
            Temp = Temp->Next;
        }
        Node *Deleted = Temp->Next;
        Temp->Next = Temp->Next->Next;
        delete Deleted;
        Temp->Next->prev = Temp;
    }
};
