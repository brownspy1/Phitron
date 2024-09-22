// Created by M.Mahadi on 2024-08-24 Time:23-10-51
#include <iostream>
#include <queue>
#include <math.h>
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
Node *Input()
{
    int firstRoot;
    cin >> firstRoot;
    Node *root = NULL;
    if (firstRoot != -1)
    {
        root = new Node(firstRoot);
    }
    queue<Node *> myQ;
    if (root != NULL)
    {
        myQ.push(root);
    }
    while (!myQ.empty())
    {
        Node *head = myQ.front();
        myQ.pop();

        Node *left = NULL;
        Node *right = NULL;
        int l, r;
        cin >> l >> r;
        if (l != -1)
            left = new Node(l);
        if (r != -1)
            right = new Node(r);

        head->left = left;
        head->right = right;

        if (head->left != NULL)
            myQ.push(head->left);
        if (head->right != NULL)
            myQ.push(head->right);
    }
    return root;
}
int countMaxHight(Node *root)
{
    if (root == NULL)
        return 0;
    int l = countMaxHight(root->left);
    int r = countMaxHight(root->right);
    return max(l, r) + 1;
}
int main()
{
    Node *root = Input();
    int n = countMaxHight(root);
    cout << n;
    return 0;
}