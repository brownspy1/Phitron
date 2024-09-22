// Created by M.Mahadi on 2024-07-13 23-55-29
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
void insert_tail(Node *&head, int v)
{
    Node *node = new Node(v);

    if (head == NULL)
    {
        head = node;
        cout << endl
             << "Successful inserted in head!" << endl
             << endl;
        return;
    }
    Node *temp = head;

    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = node;
    cout << endl
         << "Successful inserted in tail!" << endl
         << endl;
}

void print_link_list(Node *head)
{
    Node *temp = head;
    cout << "Your Value is : ";
    while (temp != NULL)
    {
        cout << temp->value;
        if (temp->next != NULL)
        {
            cout << " , ";
        }

        temp = temp->next;
    }
    cout << endl;
}

void insert_any_position(Node *head, int pos, int val)
{
    Node *Newnode = new Node(val);
    Node *Temp = head;
    for (int i = 1; i <= pos - 1; i++)
    {
        Temp = Temp->next;
    }
    Newnode->next = Temp->next;
    Temp->next = Newnode;
    cout << endl
         << "Successful inserted!" << endl
         << endl;
}
void insert_in_head(Node *&head, int val)
{
    Node *NewNode = new Node(val);
    NewNode->next = head;
    head = NewNode;
    cout << endl
         << "Successfully inserted in Head" << endl
         << endl;
}
void delete_any_node(Node *&head, int pos)
{
    Node *Temp = head;
    if (pos == 0)
    {
        Node *delete_head = head;
        head = head->next;
        delete delete_head;
        cout<<endl<<"Successfully Deleting Head"<<endl<<endl;
    }
    for (int i = 1; i <= pos - 1; i++)
    {
        Temp = Temp->next;
    }
    Node *Delete_Node = Temp->next;
    Temp->next = Temp->next->next;
    delete Delete_Node;
    cout<<endl<<"Successfully Deleting position: "<<pos<<endl<<endl;
}
int main()
{
    Node *head = NULL;
    while (true)
    {
        cout << endl;
        cout << "1:Insert in tail" << endl
             << "2.Print Linklist" << endl
             << "3.Insert any position" << endl
             << "4.Delete any Node " << endl
             << "5.Exit" << endl
             << "Enter:";
        int option;
        cin >> option;
        if (option == 1)
        {
            cout << "Enter your value: ";
            int n;
            cin >> n;
            insert_tail(head, n);
        }
        else if (option == 2)
        {
            print_link_list(head);
        }
        else if (option == 3)
        {
            int pos, val;
            cout << "Enter position:";
            cin >> pos;
            cout << "Enter Value:";
            cin >> val;
            if (pos == 0)
            {
                insert_in_head(head, val);
            }
            else
            {
                insert_any_position(head, pos, val);
            }
        }
        else if (option == 4)
        {
            int pos;
            cout << "Enter Deleting position:";
            cin >> pos;
            delete_any_node(head, pos);
        }

        else if (option == 5)
        {
            cout << "Thanks for using us!" << endl;
            return 0;
        }
    }

    return 0;
}