// Created by M.Mahadi on 2024-08-27 Time:20-52-12
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
int sum_without_leaf(Node *root)
{
    if (root == NULL)
        return 0;
    if (root->left == NULL && root->right == NULL)
        return 0;
    int l = sum_without_leaf(root->left);
    int r = sum_without_leaf(root->right);
    return l + r + root->value;
}

int main()
{
    Node *root = input();
    int sum = sum_without_leaf(root);
    cout << sum << endl;
    return 0;
}