// Created by M.Mahadi on 2024-09-02 Time:20-57-23
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
bool search(Node *root, int x)
{
    if (!root)
        return false;
    if (root->value == x)
        return true;

    if (root->value > x)
    {
        return search(root->left, x);
    }
    else
    {
        return search(root->right, x);
    }
};
int main()
{
    Node *root = input();
    int n;
    cin >> n;
    if (search(root, n))
    {
        cout << "YES, Found!" << endl;
    }
    else
    {
        cout << "NO, Not Found!" << endl;
    }

    return 0;
}