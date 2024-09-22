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
void Insert_at_head(Node *&head, int v)
{
    Node *newNode = new Node(v);
    newNode->next = head;
    head = newNode;
    cout << endl
         << "Successfully Inserted at head" << endl;
}
void Insert_at_tail(Node *&head, int v)
{

    Node *NewNode = new Node(v);
    if (head==NULL)
    {
        head = NewNode;
        return;
    }
    
    Node *temp = head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    // temp akon last node ase
    temp->next = NewNode;
    cout << endl
         << "Successfully Inserted at tail" << endl;
}
void Insert_at_any_position(Node *&head, int position, int value)
{
    Node *newNode = new Node(value);
    if (position == 0)
    {
        Insert_at_head(head, value);
        return;
    }
    Node *temp = head;
    for (int i = 1; i <= position - 1; i++)
    {
        if (temp != NULL)
        {
            temp = temp->next;
        }
        else
        {
            cout << endl
                 << "Invalid Index" << endl;
                 return;
        }
    }
    newNode->next = temp->next;
    temp->next = newNode;
    cout << "Successfully inserted at position:" << position << endl;
}
void Print_link_list_item(Node *head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->value;
        if (temp->next != NULL)
        {
            cout << " , ";
        }
        temp = temp->next;
    }
}
void count_link_list_size(Node *head)
{
    Node *temp = head;
    int count = 0;
    while (temp != NULL)
    {
        count++;
        temp = temp->next;
    }
    cout << "Your List Size is: " << count << endl;
}
void creat_a_linkList(Node * &head,int value){
    if (head==NULL)
    {
        Insert_at_head(head, value);
        return;
    }
    Insert_at_tail(head,value);
}
void delete_from_head(Node *&head){
    Node *deleted = head;
    head = head->next;
    delete deleted;
    cout<<endl<<endl<<"Successfully Deleted from Head";

}
void delete_from_tail(Node * &head){
    if (head == NULL)
    {
        cout<<endl<<endl<<"Head is NULL"<<endl;
    }else if (head->next == NULL)
    {
        delete head;
        head = NULL;
    }else
    {
        Node *temp = head;
        while (temp->next->next != NULL)
        {
            temp = temp->next;
        }
        // akon ami last node ar ager node asi
        Node * Deleted = temp->next;
        temp->next = NULL;
        delete Deleted;
        cout<<endl<<endl<<"Successfully Deleted from Tail";
    }

}

void delete_from_any_position(Node* head,int position){
    Node *temp = head;
    for (int i = 1; i <=position-1; i++)
    {
        temp = temp->next;
    }
    //ami akon deleted posison ar ager position asi
    Node * Deleted= temp->next;
    temp->next = temp->next->next;
    delete Deleted;
    cout<<endl<<endl<<"Successfully Deleted from Position: "<<position<<endl;
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
             << "10.Exit"<<endl
             << "Enter:";
        int op;
        cin >> op;
        if (op == 1)
        {
            int value ;
            while (true)
            {
                cin>>value;
                if (value==-1) break;
                creat_a_linkList(head,value);

                
            }
            
            
        }
        else if (op == 2)
        {
            count_link_list_size(head);
        }
        else if (op == 3)
        {
            Print_link_list_item(head);
        }
        else if (op == 4)
        {
            int value;
            cout << endl
                 << "Enter Your value:";
            cin >> value;
            Insert_at_head(head, value);
        }
        else if (op == 5)
        {
            int value;
            cout << endl
                 << "Enter Your value:";
            cin>>value;
            Insert_at_tail(head, value);
        }
        else if (op == 6)
        {
            int value, position;
            cout << endl
                 << "Enter Your position:";
            cin >> position;
            cout << endl
                 << "Enter Your value:";
            cin >> value;
            Insert_at_any_position(head, position, value);
        }
        else if (op == 7)
        {
           delete_from_head(head);
        }
        else if (op == 8)
        {
            delete_from_tail(head);
        }
        else if (op == 9)
        {
            int position;
            cout<<"Entar your position";
            cin>>position;
            delete_from_any_position(head,position);
        }else if (op==10)
        {
            cout<<endl<<endl<<"Thanks For Using Us!";
            break;
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