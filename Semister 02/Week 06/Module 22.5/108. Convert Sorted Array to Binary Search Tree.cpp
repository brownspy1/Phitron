// #https://leetcode.com/problems/convert-sorted-array-to-binary-search-tree/submissions/1380187368/
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
    TreeNode *BST(vector<int> &v, int l, int r)
    {
        if (l > r)
            return NULL;
        int mid = (l + r) / 2;
        TreeNode *Root = new TreeNode(v[mid]);
        TreeNode *le = BST(v, l, mid - 1);
        TreeNode *ri = BST(v, mid + 1, r);
        Root->left = le;
        Root->right = ri;
        return Root;
    }
    TreeNode *sortedArrayToBST(vector<int> &nums)
    {
        int l = 0;
        int r = nums.size() - 1;
        TreeNode *root = BST(nums, l, r);
        return root;
    }
};