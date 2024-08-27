//**https://leetcode.com/problems/leaf-similar-trees/

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
    vector<int> x1;
    vector<int> x2;
    void leaf(TreeNode *root, int x)
    {
        if (root == NULL)
            return;
        if (root->left == NULL && root->right == NULL)
        {
            if (x == 1)
            {
                x1.push_back(root->val);
            }
            else if (x == 2)
            {
                x2.push_back(root->val);
            }
        }
        leaf(root->left, x);
        leaf(root->right, x);
    }
    bool leafSimilar(TreeNode *root1, TreeNode *root2)
    {
        leaf(root1, 1);
        leaf(root2, 2);
        if (x1 == x2)
            return true;
        else
            return false;
    }
};