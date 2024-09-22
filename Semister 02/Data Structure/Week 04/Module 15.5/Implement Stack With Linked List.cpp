// https://www.codingninjas.com/studio/problems/implement-stack-with-linked-list_630475

class Stack
{
private:
    Node *Head = NULL;
    int count = 0;

public:
    Stack()
    {
        // Write your code here
    }

    int getSize()
    {
        return count;
    }

    bool isEmpty()
    {
        return count == 0;
    }
    void push(int data)
    {
        count++;
        Node *newNode = new Node(data);
        if (Head == NULL)
        {
            Head = newNode;
            return;
        }
        newNode->next = Head;
        Head = newNode;
    }

    void pop()
    {
        if (isEmpty())
            return;
        count--;
        Node *Deleted = Head;
        Head = Head->next;
        delete Deleted;
    }

    int getTop()
    {
        if (isEmpty())
            return -1;
        return Head->data;
    }
};