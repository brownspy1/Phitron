// https://www.naukri.com/code360/problems/queue-using-array-or-singly-linked-list_2099908
#include <bits/stdc++.h>
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
class Queue
{
private:
    Node *Head = NULL;
    Node *Tail = NULL;
    int cnt = 0;

public:
    Queue()
    {
        // Implement the Constructor
    }

    /*----------------- Public Functions of Queue -----------------*/

    bool isEmpty()
    {
        return cnt == 0;
    }

    void enqueue(int data)
    {
        cnt++;
        Node *newNode = new Node(data);
        if (Head == NULL)
        {
            Head = newNode;
            Tail = newNode;
            return;
        }
        Tail->next = newNode;
        Tail = newNode;
    }

    int dequeue()
    {
        if (isEmpty())
            return -1;

        cnt--;
        int x = Head->value;
        Node *deleted = Head;
        Head = Head->next;
        delete deleted;
        return x;
    }

    int front()
    {
        if (!isEmpty())
        {
            return Head->value;
        }
        }
};