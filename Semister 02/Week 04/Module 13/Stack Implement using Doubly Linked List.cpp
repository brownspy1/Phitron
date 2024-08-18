// Created by M.Mahadi on 2024-08-18 Time:18-47-58
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
class myStack
{
private:
    Node *Head = NULL;
    Node *Tail = NULL;

public:
};
int main()
{

    return 0;
}