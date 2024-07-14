// Created by M.Mahadi on 2024/07/14 Time 12:44:41
#include <iostream>
using namespace std;
class Node
{
public:
    int value;
    Node *next;

    Node(int value)
    {
        this->value = value;
        this->next = NULL;
    }
};
int main()
{
    Node *head = NULL;
    while (true)
    {
        cout << endl
             << "LinkLIST Operation" << endl
             << "1.Input a LinkList" << endl
             << "2.Count the Size of the list" << endl
             << "3.Display List" << endl
             << "4.Insertion at Head" << "5.Insertion at Tail" << endl
             << "6.Insertion at Specific Position" << endl
             << "7.Deletion at Head" << endl
             << "8.Deletion at Tail" << endl
             << "9.Deletion at a Specific Position" << endl;
    }

    return 0;
}