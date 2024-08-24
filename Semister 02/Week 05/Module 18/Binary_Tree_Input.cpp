// Created by M.Mahadi on 2024-08-24 Time:20-01-18
#include <iostream>
#include <queue>
using namespace std;
class Node
{
public:
    Node *left;
    int value;
    Node *right;

    Node(int value)
    {
        this->left = NULL;
        this->value = value;
        this->right = NULL;
    }
};

Node *LevelOrderInput()
{
    int firstValue;
    cin >> firstValue;
    Node *root = NULL;
    if (firstValue != -1)
    {
        root = new Node(firstValue);
    }
    queue<Node *> myQ;
    if (root != NULL)
        myQ.push(root);
    while (!myQ.empty())
    {
        Node *myVal = myQ.front();
        myQ.pop();

        Node *Left = NULL;
        Node *Right = NULL;
        int l, r;
        cin >> l >> r;
        if (l != -1)
        {
            Left = new Node(l);
        }
        if (r != -1)
        {
            Right = new Node(r);
        }
        myVal->left = Left;
        myVal->right = Right;

        if (myVal->left != NULL)
        {
            myQ.push(myVal->left);
        }
        if (myVal->right != NULL)
        {
            myQ.push(myVal->right);
        }
    }
    return root;
}
Node *LevelOrder(Node *root)
{
    if (root == NULL)
    {
        cout << "Root Are Empty!" << endl;
        return root;
    }
    queue<Node *> myQ;
    myQ.push(root);
    while (!myQ.empty())
    {
        Node *myVal = myQ.front();
        myQ.pop();

        cout << myVal->value << endl;

        if (myVal->left != NULL)
        {
            myQ.push(myVal->left);
        }
        if (myVal->right != NULL)
        {
            myQ.push(myVal->right);
        }
    }
}
int main()
{
    Node *root = LevelOrderInput();
    LevelOrder(root);
    return 0;
}