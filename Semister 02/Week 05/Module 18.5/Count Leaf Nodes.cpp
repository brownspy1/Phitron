// #https://www.naukri.com/code360/problems/count-leaf-nodes_893055

int noOfLeafNodes(BinaryTreeNode<int> *root)
{
    int lef = 0;
    queue<BinaryTreeNode<int> *> myQ;
    if (root != NULL)
        myQ.push(root);
    while (!myQ.empty())
    {
        BinaryTreeNode<int> *myValue = myQ.front();
        myQ.pop();

        if (myValue->left == NULL && myValue->right == NULL)
            lef++;

        if (myValue->left != NULL)
            myQ.push(myValue->left);
        if (myValue->right != NULL)
            myQ.push(myValue->right);
    }
    return lef;
}