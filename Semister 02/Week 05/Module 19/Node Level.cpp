//*https://www.naukri.com/code360/problems/node-level_920383
#include <bits/stdc++.h>
/************************************************************

    Following is the TreeNode class structure

    template <typename T>
    class TreeNode {
       public:
        T val;
        bool isOriginal;
        TreeNode<T> *left;
        TreeNode<T> *right;

        TreeNode(T val) {
            this->val = val;
            left = NULL;
            right = NULL;
        }
    };

************************************************************/

int nodeLevel(TreeNode<int> *root, int searchedValue)
{
    queue<pair<TreeNode<int> *, int>> myQ;
    if (root)
        myQ.push({root, 1});

    while (!myQ.empty())
    {
        pair<TreeNode<int> *, int> myPair = myQ.front();
        TreeNode<int> *Parent = myPair.first;
        myQ.pop();

        int level = myPair.second;

        if (Parent->val == searchedValue)
            return level;

        if (Parent->left)
            myQ.push({Parent->left, level + 1});
        if (Parent->right)
            myQ.push({Parent->right, level + 1});
    }
}
