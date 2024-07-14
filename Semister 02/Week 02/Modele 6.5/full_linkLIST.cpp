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
void Insert_at_head(Node* &head, int v){
    Node * newNode = new Node(v);
    newNode->next = head;
    head = newNode;
    cout<<endl<<"Inserted at head"<<endl;
}
void Insert_at_tail(Node * head,int v){
    Node * NewNode = new Node(v);
    Node *temp = head; 
    while (temp->next!=NULL)
    {
        temp = temp->next;
    }
    // temp akon last node ase
    temp->next = NewNode;
    cout<<endl<<"Inserted at tail"<<endl;
}
void Insert_at_any_position(Node*head,int position , int value){
    Node * newNode = new Node(value);
    if (position==0)
    {
        Insert_at_head(head,value);
        return;
    }
    Node* temp = head;
    for (int i = 1; i <= position-1; i++)
    {
        if (temp!=NULL)
        {
            temp = temp->next;
        }else
        {
            cout<<endl<<"Invalid Index"<<endl;
        }   
    }
    newNode->next = temp->next;
    temp->next = newNode;
    cout<<"Successfully inserted at position:"<<position<<endl;

}
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
             << "4.Insertion at Head" << endl
             << "5.Insertion at Tail" << endl
             << "6.Insertion at Specific Position" << endl
             << "7.Deletion at Head" << endl
             << "8.Deletion at Tail" << endl
             << "9.Deletion at a Specific Position" << endl
             << "Enter:";
        int op;
        cin >> op;
        if (op == 1)
        {
            // creat_a_linkList();
        }
        else if (op == 2)
        {
            // count_link_list_size();
        }
        else if (op == 3)
        {
            // Print_link_list_item();
        }
        else if (op == 4)
        {
           int value;
           cout<<endl<<"Enter Your value:";
           cin>>value;
           Insert_at_head(head,value);
        }
        else if (op == 5)
        {
            int value;
            cout<<endl<<"Enter Your value:";
            Insert_at_tail(head,value);
        }
        else if (op == 6)
        {
            // Insert_at_any_position();
        }
        else if (op == 7)
        {
            // delete_from_head();
        }
        else if (op == 8)
        {
            // delete_from_tail();
        }
        else if (op == 9)
        {
            // delete_from_any_position();
        }
        else
        {
            cout << endl
                 << "Yor input should be [1-9]" << endl
                 << endl;
        }
    }

    return 0;
}