// #https://www.naukri.com/code360/problems/code-find-a-node_5682
#include <bits/stdc++.h>
bool isNodePresent(BinaryTreeNode<int> *root, int x)
{
    queue<BinaryTreeNode<int> *> myQue;
    if (root)
        myQue.push(root);
    while (!myQue.empty())
    {
        BinaryTreeNode<int> *parent = myQue.front();
        myQue.pop();

        if (parent->data == x)
            return true;
        // Step : 03
        if (parent->left)
            myQue.push(parent->left);
        if (parent->right)
            myQue.push(parent->right);
    }
}