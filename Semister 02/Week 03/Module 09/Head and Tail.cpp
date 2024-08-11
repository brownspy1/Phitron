// Created by M.Mahadi on 2024-08-11 Time:16-53-44
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
void insert_at_tail(Node *&Tail, int value) {

};
int main()
{
    Node *Head = NULL;
    Node *Tail = NULL;
    return 0;
}