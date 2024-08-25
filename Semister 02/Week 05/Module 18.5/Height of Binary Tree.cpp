// #https://www.naukri.com/code360/problems/tree-height_4609628

int heightOfBinaryTree(TreeNode<int> *root)
{
    if (root == NULL)
        return 0;
    int l = heightOfBinaryTree(root->left);
    int r = heightOfBinaryTree(root->right);
    return 1 + max(l, r);
}
