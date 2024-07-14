// Created by M.Mahadi on 2024/07/14 Time 22:23:12
#include <iostream>
using namespace std;
class Node {
    public:
    int value;
    Node * next;
    
    Node(int value){
        this->value = value;
        this->next =NULL;
    }
};
void insert_link_List(Node*&Head, int value){
    Node *newNode = new Node(value);
    if (Head==NULL)
    {
        Head = newNode;
        return;
    }
    Node *Temp = Head;
    while (Temp->next != NULL)
    {
        Temp = Temp->next;
    }
    Temp->next = newNode;    
}
void print_link_list(Node *&head){
    Node * temp = head;
    while (temp!=NULL)
    {
        cout<<temp->value<<" ";
        temp = temp->next;
    }
    cout<<endl;
    
}
void insert_a_value_in_specific_position(Node *&head,int position,int value){
    Node *newNode = new Node(value);
    if (position == 0)
    {
       newNode->next = head;
       head = newNode;
       print_link_list(head);
       return;
    }
    Node* Temp = head;
    bool flag = false;
    for (int i = 1; i < position; i++)
    {
        Temp = Temp->next;
        if (Temp==NULL)
        {
            flag = true;
            cout<<"Invalid"<<endl;
            return;
        }
        
    }
    newNode->next = Temp->next;
    Temp->next = newNode;
    if (flag)
    {
        cout<<"Invalid"<<endl;
    }else
    {
        print_link_list(head);
    }
    
    
    
}

int main(){
    Node * head =NULL;
    int value;
    while (true)
    {
        cin>>value;
        if (value == -1) break;
        insert_link_List(head,value);
    }
    int n;
    cin>>n;
    for (int i = 1; i <= n; i++)
    {
        int pos,val;
        cin>>pos>>val;
        insert_a_value_in_specific_position(head,pos,val);
    }
    
    
    return 0;
}