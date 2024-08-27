// #https://leetcode.com/problems/root-equals-sum-of-children/description/
//* Created by M.Mahadi on 2024-08-27 Time:15-37-26
// #include <iostream>
// #include <queue>
// using namespace std;
// class Node
// {
// public:
//     Node *left;
//     int value;
//     Node *right;

//     Node(int value)
//     {
//         this->left = NULL;
//         this->value = value;
//         this->right = NULL;
//     }
// };
// Node *input()
// {
//     int n;
//     cin >> n;
//     Node *root = NULL;
//     if (n != -1)
//     {
//         root = new Node(n);
//     }
//     queue<Node *> myQ;

//     if (root)
//         myQ.push(root);
//     while (!myQ.empty())
//     {
//         Node *parent = myQ.front();
//         myQ.pop();

//         Node *left = NULL;
//         Node *right = NULL;
//         int l, r;
//         cin >> l >> r;

//         if (l != -1)
//             left = new Node(l);
//         if (r != -1)
//             right = new Node(r);

//         parent->left = left;
//         parent->right = right;

//         if (parent->left)
//             myQ.push(parent->left);
//         if (parent->right)
//             myQ.push(parent->right);
//     }
//     return root;
// };

// void preOrder(Node *root)
// {
//     if (root == NULL)
//         return;
//     if (root->left == NULL && root->right == NULL)
//     {
//         cout << root->value << " ";
//     }
//     preOrder(root->left);
//     preOrder(root->right);
// }
// int main()
// {

//     Node *root = input();
//     preOrder(root);
//     return 0;
// }
class Solution
{
public:
    bool checkTree(TreeNode *root)
    {
        int l = root->left->val;
        int r = root->right->val;
        if (root->val == l + r)
            return true;
        else
            return false;
    }
};