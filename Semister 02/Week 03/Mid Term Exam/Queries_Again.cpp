#include <iostream>
using namespace std;

class Node
{
public:
    Node *prev;
    int value;
    Node *next;

    Node(int value)
    {
        this->prev = NULL;
        this->value = value;
        this->next = NULL;
    }
};

int count(Node *Head);
void insert_Head(Node *&Head, Node *&Tail, int Value);
void insert_Tail(Node *&Head, Node *&Tail, int value);
void insert_position(Node *&head, Node *&Tail, int value, int pos);
void print(Node *Head, Node *Tail);

int main()
{
    Node *Head = NULL;
    Node *Tail = NULL;
    int n;
    cin >> n;
    while (n--)
    {
        int P, V;
        cin >> P >> V;
        if (V == -1)
            break;
        if (P == 0)
        {
            insert_Head(Head, Tail, V);
            print(Head, Tail);
        }
        else if (P == count(Head))
        {
            insert_Tail(Head, Tail, V);
            print(Head, Tail);
        }
        else if (P > count(Head))
        {
            cout << "Invalid" << endl;
        }
        else if (P < count(Head))
        {
            insert_position(Head, Tail, V, P);
            print(Head, Tail);
        }
    }

    return 0;
}

int count(Node *Head)
{
    int count = 0;
    while (Head != NULL)
    {
        count++;
        Head = Head->next;
    }
    return count;
}

void insert_Head(Node *&Head, Node *&Tail, int Value)
{
    Node *newNode = new Node(Value);
    if (Head == NULL)
    {
        Head = newNode;
        Tail = newNode;
        return;
    }
    newNode->next = Head;
    Head->prev = newNode;
    Head = newNode;
}

void insert_Tail(Node *&Head, Node *&Tail, int value)
{
    Node *newNode = new Node(value);
    if (Tail == NULL)
    {
        Head = newNode;
        Tail = newNode;
        return;
    }
    Tail->next = newNode;
    newNode->prev = Tail;
    Tail = newNode;
}

void insert_position(Node *&head, Node *&Tail, int value, int pos)
{

    Node *newNode = new Node(value);
    Node *Temp = head;
    for (int i = 0; i < pos - 1; i++)
    {
        Temp = Temp->next;
    }
    newNode->next = Temp->next;
    newNode->next->prev = newNode;
    Temp->next = newNode;
    newNode->prev = Temp;
}

void print(Node *Head, Node *Tail)
{
    cout << "L -> ";
    while (Head != NULL)
    {
        cout << Head->value << " ";
        Head = Head->next;
    }
    cout << endl;
    cout << "R -> ";
    while (Tail != NULL)
    {
        cout << Tail->value << " ";
        Tail = Tail->prev;
    }
    cout << endl;
}
