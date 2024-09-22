//*https://www.naukri.com/code360/problems/left-view-of-a-binary-tree_920519
#include <bits/stdc++.h>
/************************************************************

    Following is the TreeNode class structure

    template <typename T>
    class TreeNode {
       public:
        T data;
        TreeNode<T> *left;
        TreeNode<T> *right;

        TreeNode(T data) {
            this->data = data;
            left = NULL;
            right = NULL;
        }
    };

************************************************************/

vector<int> getLeftView(TreeNode<int> *root)
{
    vector<int> v;
    queue<pair<TreeNode<int> *, int>> myQ;
    bool freq[3005] = {false};
    if (root)
        myQ.push({root, 1});
    while (!myQ.empty())
    {
        pair<TreeNode<int> *, int> myPair = myQ.front();
        myQ.pop();
        TreeNode<int> *parent = myPair.first;
        int level = myPair.second;

        if (freq[level] == false)
        {
            v.push_back(parent->data);
            freq[level] = true;
        }
        if (parent->left)
            myQ.push({parent->left, level + 1});
        if (parent->right)
            myQ.push({parent->right, level + 1});
    }
    return v;
}