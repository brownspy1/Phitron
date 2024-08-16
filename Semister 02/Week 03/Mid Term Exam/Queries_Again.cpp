// Created by M.Mahadi on 2024-08-17 Time:01-00-13
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
// my all function
int count(Node *Head);
void insert_Head(Node *&Head, Node *&Tail, int Value);
void insert_Tail(Node *&Head, Node *&Tail, int value);
void insert_position(Node *&head, Node *&Tail, int value, int pos);
void print(Node *Head, Node *Tail);
//---------------------------------------------------------------
int main()
{

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
};
void insert_Head(Node *&Head, Node *&Tail, int Value) {

};
void insert_Tail(Node *&Head, Node *&Tail, int value) {};

void insert_position(Node *&head, Node *&Tail, int value, int pos) {};
void print(Node *Head, Node *Tail) {};