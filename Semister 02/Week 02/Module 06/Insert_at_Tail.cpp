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
void insart_tail(Node *&head, int v)
{
    Node *node = new Node(v);

    if (head == NULL)
    {
        head = node;
    }
    Node *temp = head;

    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = node;
}

void print_link_list(Node * head){
    Node *temp = head;
    cout<<"Your Value is : "
    while (temp != NULL)
    {
        cout<<temo->value
    }
    
}
int main()
{
    Node* head = NULL;
    // Node* head = new Node(10);
    cout << "Choose your option" << endl
         << "1: Insart in tail" << endl
         << "2.Print Linklist" << endl
         << "3.Exit" << endl
         << "Enter:";
    int option;
    cin>>option;
        if (option == 1)
        {
            cout<<"Entar your value:";
            int n;
            cin>>n;
            insart_tail(head,n);
        }
        
    return 0;
}