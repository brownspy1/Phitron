// #https://www.naukri.com/code360/problems/preorder-binary-tree_5948
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
vector<int> tree;
void preOrderTree(TreeNode<int> *root)
{
    if (root == NULL)
        return;
    tree.push_back(root->data);
    preOrderTree(root->left);
    preOrderTree(root->right);
}
vector<int> preOrder(TreeNode<int> *root)
{
    tree.clear();
    preOrderTree(root);
    return tree;
}
