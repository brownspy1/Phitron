// Created by M.Mahadi on 2024-08-17 Time:02-23-32
#include <iostream>
#include <string>
using namespace std;
class Node
{
public:
    Node *prev;
    string website;
    Node *next;

    Node(string website)
    {
        this->prev = NULL;
        this->website = website;
        this->next = NULL;
    }
};
void insert(Node *&Head, Node *&Tail, string website)
{
    Node *newNode = new Node(website);
    if (Head == NULL)
    {
        Head = newNode;
        Tail = newNode;
        return;
    }
    Tail->next = newNode;
    newNode->prev = Tail;
    Tail = newNode;
};
void print(Node *Head)
{
    while (Head != NULL)
    {
        cout << Head->website << " ";
        Head = Head->next;
    }
}
void visit(Node *Head, Node *&current, string address)
{
    Node *temp = Head;
    while (temp != NULL)
    {
        if (temp->website == address)
        {
            current = temp;
            cout << address << endl;
            return;
        }
        temp = temp->next;
    }

    cout << "Not Available" << endl;
};
void prev(Node *&current)
{
    if (current != NULL && current->prev != NULL)
    {
        current = current->prev;
        cout << current->website << endl;
    }
    else
    {
        cout << "Not Available" << endl;
    }
};
void next(Node *&current)
{
    if (current != NULL && current->next != NULL)
    {
        current = current->next;
        cout << current->website << endl;
    }
    else
    {
        cout << "Not Available" << endl;
    }
};
int main()
{
    Node *Head = NULL;
    Node *Tail = NULL;
    Node *current = NULL;
    while (true)
    {
        string website;
        cin >> website;
        if (website == "end")
            break;
        insert(Head, Tail, website);
    }

    int n;
    cin >> n;
    string task, address;
    while (n--)
    {
        cin >> task;
        if (task == "visit")
        {
            cin >> address;
            visit(Head, current, address);
        }
        else if (task == "prev")
        {
            prev(current);
        }
        else if (task == "next")
        {
            next(current);
        }
    }

    return 0;
}