// Created by M.Mahadi on 2024-07-17 Time:20-07-22
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
void input(Node *&Head, int value, Node *&Tail)
{
    Node *NewNode = new Node(value);
    if (Head == NULL)
    {
        Head = NewNode;
        Tail = NewNode;
        return;
    }

    Tail->next = NewNode;
    Tail = NewNode;
}
int count(Node *Head)
{
    Node *temp = Head;
    int count = 0;
    for (Node *i = temp; i != NULL; i = i->next)
    {
        count++;
    }
    return count;
}
void compare(Node *Head, Node *Head1)
{
    Node *cmp1 = Head, *cmp2 = Head1;
    bool flag = true;
    while (cmp1 != NULL && cmp2 != NULL)
    {
        if (cmp1->value != cmp2->value)
        {
            flag = false;
        }
        cmp1 = cmp1->next;
        cmp2 = cmp2->next;
    }
    if (flag)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }
}
int main()
{
    Node *Head = NULL;
    Node *Tail = NULL;
    int value;
    while (true)
    {
        cin >> value;
        if (value == -1)
            break;
        input(Head, value, Tail);
    }

    Node *Head1 = NULL;
    Node *Tail1 = NULL;
    int value1;
    while (true)
    {
        cin >> value1;
        if (value1 == -1)
            break;
        input(Head1, value1, Tail1);
    }
    if (count(Head) != count(Head1))
    {
        cout << "NO";
    }
    else
    {
        compare(Head, Head1);
    }

    return 0;
}