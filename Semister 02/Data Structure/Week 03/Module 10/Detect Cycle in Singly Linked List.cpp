// Created by M.Mahadi on 2024-08-14 Time:23-51-17
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
void print(Node *head)
{
    while (head != NULL)
    {
        cout << head->value << " ";
        head = head->next;
    }
};
int main()
{
    Node *Head = new Node(10);
    Node *a = new Node(20);
    Node *b = new Node(30);
    Node *c = new Node(40);
    Node *d = new Node(50);
    Head->next = a;
    a->next = b;
    b->next = c;
    c->next = d;
    // d->next = b;
    bool flag = false;
    Node *fast = Head;
    Node *slow = Head;
    while (fast != NULL && fast->next != NULL)
    {
        fast = fast->next->next;
        slow = slow->next;
        if (fast == slow)
        {
            flag = true;
            break;
        }
    }

    if (flag)
    {
        cout << "Cycle Detect";
    }
    else
    {
        cout << "Not Detect" << endl;
        print(Head);
    }

    return 0;
}