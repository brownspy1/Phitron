// Created by M.Mahadi on 2024-08-24 Time:22-40-38
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
int size(Node *root)
{
    if (root == NULL)
    {
        return 0;
    }

    int l = size(root->left);
    int r = size(root->right);
    return l + r + 1;
}
Node *LevelOrderInput()
{
    int n;
    cin >> n;
    Node *root = NULL;
    if (n != -1)
    {
        root = new Node(n);
    }
    queue<Node *> myQ;
    if (root)
        myQ.push(root);
    while (!myQ.empty())
    {
        Node *Myval = myQ.front();
        myQ.pop();
        // input child value
        Node *left = NULL;
        Node *right = NULL;
        int L, R;
        cin >> L >> R;
        if (L != -1)
        {
            left = new Node(L);
        }
        if (R != -1)
        {
            right = new Node(R);
        }
        Myval->left = left;
        Myval->right = right;

        if (Myval->left != NULL)
        {
            myQ.push(Myval->left);
        }
        if (Myval->right != NULL)
        {
            myQ.push(Myval->right);
        }
    }
    return root;
}
int main()
{
    Node *root = LevelOrderInput();
    int count = size(root);
    cout << count << endl;
    return 0;
}