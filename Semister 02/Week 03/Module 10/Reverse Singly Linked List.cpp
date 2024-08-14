// Created by M.Mahadi on 2024-08-14 Time:13-40-34
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
void recursive(Node *&head, Node *temp)
{
    if (temp->next == NULL)
    {
        head = temp;
        return;
    }
    recursive(head, temp->next);
    temp->next->next = temp;
    temp->next = NULL;
}
void print(Node *head)
{
    while (head != NULL)
    {
        cout << head->value << " ";
        head = head->next;
    }
    cout << endl;
}
int main()
{
    Node *head = new Node(10);
    Node *b = new Node(20);
    Node *tail = new Node(30);
    head->next = b;
    b->next = tail;
    print(head);
    recursive(head, head);
    print(head);
    return 0;
}