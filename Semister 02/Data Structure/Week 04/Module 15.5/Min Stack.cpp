// https://www.naukri.com/code360/problems/min-stack_3843991
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
class minStack
{
private:
    Node *Head = NULL;
    Node *Min = NULL;

public:
    void push(int num)
    {
        Node *newNode = new Node(num);
        if (Head == NULL)
        {
            Head = newNode;
            Min = new Node(num);
        }
        else
        {
            newNode->next = Head;
            Head = newNode;
            if (num <= Min->value)
            {
                Node *temp = new Node(num);
                temp->next = Min;
                Min = temp;
            }
        }
    }

    int pop()
    {
        if (Head == NULL)
            return -1;
        int Temp = Head->value;
        if (Temp == Min->value)
        {

            Node *temperate = Min;
            Min = Min->next;
            delete temperate;
        }
        Node *Deleted = Head;
        Head = Head->next;
        delete Deleted;
        return Temp;
    }

    int top()
    {
        if (Head == NULL)
            return -1;
        return Head->value;
    }

    // Function to return minimum element of stack if it is present. Otherwise return -1.
    int getMin()
    {
        if (Min == NULL)
            return -1;
        else
        {
            return Min->value;
        }
    }
};