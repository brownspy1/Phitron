// Created by M.Mahadi on 2024-08-27 Time:22:38:00
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
void levelPrint(Node *root, int n)
{
    queue<pair<Node *, int>> myQ;
    if (root)
        myQ.push({root, 0});
    while (!myQ.empty())
    {
        pair<Node *, int> myPair = myQ.front();
        myQ.pop();
        Node *parent = myPair.first;
        int level = myPair.second;
        if (level == n)
        {
            cout << parent->value << " ";
        }

        if (parent->left)
            myQ.push({parent->left, level + 1});
        if (parent->right)
            myQ.push({parent->right, level + 1});
    }
}
int level(Node *root)
{
    if (!root)
        return 0;
    int l = level(root->left);
    int r = level(root->right);
    return 1 + max(l, r);
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    Node *root = input();
    int n;
    cin >> n;
    int le = level(root);
    if (n >= le)
    {
        cout << "Invalid";
    }
    else
    {
        levelPrint(root, n);
    }

    return 0;
}
