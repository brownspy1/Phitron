// Created by M.Mahadi on 2024-09-03 Time:19-03-29
#include <bits/stdc++.h>
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
Node *input()
{
    Node *root = NULL;
    int n;
    cin >> n;
    if (n != -1)
    {
        root = new Node(n);
    }
    queue<Node *> myQ;
    if (root)
        myQ.push(root);
    while (!myQ.empty())
    {
        Node *parent = myQ.front();
        myQ.pop();

        Node *left = NULL;
        Node *right = NULL;
        int l, r;
        cin >> l >> r;
        if (l != -1)
            left = new Node(l);
        if (r != -1)
            right = new Node(r);

        parent->left = left;
        parent->right = right;

        if (parent->left)
            myQ.push(parent->left);
        if (parent->right)
            myQ.push(parent->right);
    }
    return root;
}
void insert(Node *&root, int x)
{
    if (root == NULL)
    {
        root = new Node(x);
        return;
    }
    if (root->value > x)
    {

        if (root->left == NULL)
        {
            root->left = new Node(x);
        }
        else
        {
            insert(root->left, x);
        }
    }
    else
    {
        if (root->right == NULL)
        {
            root->right = new Node(x);
        }
        else
        {
            insert(root->right, x);
        }
    }
}
Node *print(Node *root)
{

    queue<Node *> myQ;
    if (root)
        myQ.push(root);
    while (!myQ.empty())
    {
        Node *parent = myQ.front();
        myQ.pop();

        cout << parent->value << " ";

        if (parent->left)
            myQ.push(parent->left);

        if (parent->right)
            myQ.push(parent->right);
    }
    return root;
}
int main()
{
    Node *root = input();
    insert(root, 10);
    insert(root, 30);
    insert(root, 5);
    print(root);
    return 0;
}