// Created by M.Mahadi on 2024-08-24 Time:14-02-14
#include <iostream>
#include <queue>
using namespace std;
class Node
{
public:
    Node *left;
    int value;
    Node *right;

    Node(int value)
    {
        this->left = NULL;
        this->value = value;
        this->right = NULL;
    }
};
void LevelOrder(Node *root)
{
    queue<Node *> myQueue;
    //* insert root in queue
    myQueue.push(root);
    while (!myQueue.empty())
    {
        // ? First of all queue teke BarKore ano

        Node *F = myQueue.front();
        myQueue.pop();

        //? ja korar aikane korbo

        cout << F->value << endl;

        //?  akon amar root ar child queue ta push korta hobe
        // ** ami aikane F->left != NULL aita pori borta aitaw use kora pari F->left
        //** karon holo NULL akta false value ar jodi F->left aita NULL hoy taila aita run hobe na
        if (F->left)
            myQueue.push(F->left);
        if (F->right)
            myQueue.push(F->right);
    }
}
int main()
{
    Node *Root = new Node(10);
    Node *a = new Node(20);
    Node *b = new Node(30);
    Node *c = new Node(40);
    Node *d = new Node(50);
    Node *e = new Node(60);
    Node *f = new Node(70);
    Node *g = new Node(80);
    Node *h = new Node(90);
    Node *i = new Node(100);

    // # connection
    Root->left = a;
    Root->right = b;

    a->left = c;
    a->right = h;

    c->right = e;

    h->right = i;

    b->right = d;

    d->left = f;
    d->right = g;

    LevelOrder(Root);
    return 0;
}