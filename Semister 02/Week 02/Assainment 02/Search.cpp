// Created by M.Mahadi on 2024-07-17 Time:12-43-50
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

int finding(Node *Head, int value)
{
    Node *Temp = Head;
    int index = 0;
    while (Temp != NULL)
    {
        if (Temp->value == value)
        {
            return index;
        }
        index++;
        Temp = Temp->next;
    }
    return -1;
}
int main()
{
    int count;
    cin >> count;
    for (int i = 0; i < count; i++)
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
        int find;
        cin >> find;
        int ans = finding(Head, find);
        cout << ans << endl;
    }

    return 0;
}