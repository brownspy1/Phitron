//! https://leetcode.com/problems/univalued-binary-tree/
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution
{
public:
    bool receve(TreeNode *root, int x)
    {
        if (root == NULL)
            return true;
        if (root->left != NULL && root->left->val != x)
            return false;
        if (root->right != NULL && root->right->val != x)
            return false;
        bool l = receve(root->left, x);
        bool r = receve(root->right, x);
        return l && r;
    }
    bool isUnivalTree(TreeNode *root)
    {
        return receve(root, root->val);
    }
};