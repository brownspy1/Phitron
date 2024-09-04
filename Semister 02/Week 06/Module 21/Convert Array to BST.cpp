// Created by M.Mahadi on 2024-09-04 Time:13-02-27
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
Node *Convert(int a[], int left, int right)
{
    if (left > right)
        return NULL;
    int mid = (left + right) / 2;
    Node *root = new Node(a[mid]);
    Node *leftRoot = Convert(a, left, mid - 1);
    Node *rightRoot = Convert(a, mid + 1, right);
    root->left = leftRoot;
    root->right = rightRoot;
    return root;
}
void print(Node *root)
{
    if (!root)
        return;
    cout << root->value << " ";
    print(root->left);
    print(root->right);
}
int main()
{
    int n;
    cin >> n;
    int array[n];
    for (int i = 0; i < n; i++)
        cin >> array[i];
    Node *root = Convert(array, 0, n - 1);
    print(root);
    return 0;
}