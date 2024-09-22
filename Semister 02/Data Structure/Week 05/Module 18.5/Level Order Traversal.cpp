// #https://www.naukri.com/code360/problems/level-order-traversal_796002
#include <bits/stdc++.h>
/************************************************************

    Following is the BinaryTreeNode class structure

    template <typename T>
    class BinaryTreeNode {
       public:
        T val;
        BinaryTreeNode<T> *left;
        BinaryTreeNode<T> *right;

        BinaryTreeNode(T val) {
            this->val = val;
            left = NULL;
            right = NULL;
        }
    };

************************************************************/
vector<int> getLevelOrder(BinaryTreeNode<int> *root)
{
    vector<int> v;
    queue<BinaryTreeNode<int> *> myQ;
    if (root != NULL)
        myQ.push(root);

    while (!myQ.empty())
    {
        BinaryTreeNode<int> *Value = myQ.front();
        myQ.pop();

        v.push_back(Value->val);

        if (Value->left)
            myQ.push(Value->left);
        if (Value->right)
            myQ.push(Value->right);
    }
    return v;
}