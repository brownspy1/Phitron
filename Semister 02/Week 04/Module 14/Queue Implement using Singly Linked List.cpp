// Created by M.Mahadi on 2024-08-19 Time:17-41-05
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
class myQueue
{
private:
    Node *Head = NULL;
    Node *Tail = NULL;

public:
    void push(int v)
    {
        Node *newNode = new Node(v);
        if (Head == NULL)
        {
            Head = newNode;
            Tail = newNode;
            return;
        }
        Tail->next = newNode;
        Tail = newNode;
    }
};
int main()
{

    return 0;
}