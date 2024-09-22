//?https://leetcode.com/problems/binary-tree-tilt/

class Solution
{
public:
    int tilt = 0;
    int mm(TreeNode *root)
    {
        if (!root)
            return 0;
        int l = mm(root->left);
        int r = mm(root->right);
        tilt += abs(l - r);
        return l + r + root->val;
    }
    int findTilt(TreeNode *root)
    {
        mm(root);
        return tilt;
    }
};