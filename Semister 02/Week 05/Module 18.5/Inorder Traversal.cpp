// #https://www.naukri.com/code360/problems/inorder-traversal_3839605/*
Following is Binary Tree Node structure : class TreeNode
{
public:
    int data;
    TreeNode *left, *right;
    TreeNode() : data(0), left(NULL), right(NULL) {}
    TreeNode(int x) : data(x), left(NULL), right(NULL) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : data(x), left(left), right(right) {}
};
* /
    vector<int> v;
void inOrderprint(TreeNode *root)
{
    if (root == NULL)
        return;
    inOrderprint(root->left);
    v.push_back(root->data);
    inOrderprint(root->right);
}
vector<int> getInOrderTraversal(TreeNode *root)
{
    v.clear();
    inOrderprint(root);
    return v;
}