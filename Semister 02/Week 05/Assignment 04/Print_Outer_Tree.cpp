// Created by M.Mahadi on 2024-08-28 Time:13:23:30
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
void myLeft(Node *root)
{
    if (!root)
        return;
    if (root->left)
    {
        myLeft(root->left);
        cout << root->value << " ";
    }
    if (!root->left)
    {
        myLeft(root->right);
        cout << root->value << " ";
    }
};
void myRight(Node *root)
{
    if (!root)
        return;
    if (root->right)
    {
        cout << root->value << " ";
        myRight(root->right);
    }
    if (!root->right)
    {
        cout << root->value << " ";
        myRight(root->left);
    }
};
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    Node *root = input();
    if (!root)
        return 0;
    myLeft(root->left);
    cout << root->value << " ";
    myRight(root->right);
    return 0;
}
