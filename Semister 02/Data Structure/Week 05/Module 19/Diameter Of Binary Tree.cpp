// #https://www.naukri.com/code360/problems/diameter-of-the-binary-tree_920552
int mx = 0;
int Trav(TreeNode<int> *root)
{
    if (root == NULL)
        return 0;
    int l = Trav(root->left);
    int r = Trav(root->right);
    int diameter = l + r;
    mx = max(mx, diameter);
    return max(l, r) + 1;
}
int diameterOfBinaryTree(TreeNode<int> *root)
{
    mx = 0;
    int l = Trav(root->left);
    int r = Trav(root->right);
    // int p = Trav(root);
    return max(mx, l + r);
}
