h(Parent->right);
        }
    }
    return root;
}
int main()
{
    Node *root = LevelOrderInput();
    LevelOrder(root);
    return 0;
}