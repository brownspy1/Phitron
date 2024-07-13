// Created by M.Mahadi on 2024/07/13 Time 20:10:26
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
        return;
    }
    Node *temp = head;

    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = node;
}

void print_link_list(Node *head)
{
    Node *temp = head;
    cout << "Your Value is : ";
    while (temp != NULL)
    {
        cout << temp->value;
        if (temp->next!=NULL)
        {
            cout<< " , ";
        }
        
        temp = temp->next;
    }
    cout<<endl;
}
int main()
{
    Node *head = NULL;
    while (true)
    {
        cout<<endl;
        cout << "1:Insart in tail" << endl
             << "2.Print Linklist" << endl
             << "3.Exit" << endl
             << "Enter:";
        int option;
        cin >> option;
        switch(option){
            case 1: {
                cout << "Enter your value: ";
                int n;
                cin >> n;
                insert_tail(head, n);
                break;}

            case 2: {
                print_link_list(head);
                break;}

            case 3: {
                cout << "Thanks for using us!" << endl;
                return 0;}

            default: {
                cout << "Invalid option. Please choose again." << endl;
                break;}
        }
        
    }

    return 0;
}