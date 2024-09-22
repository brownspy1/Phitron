// Created by M.Mahadi on 2024/07/14 Time 12:19:26
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
int main(){
    int v;
    Node * head = NULL;
    while (true)
    {
       cin>>v;
       if (v==-1)break;
       Node *newnode = new Node(v);
       if (head == NULL)
       {
         head = newnode;
         
       }else
       {
        Node *temp = head;
       while (temp->next != NULL)
       {
        temp = temp->next;
       }
       temp->next = newnode;
       }
       
       
    }
    Node* temp = head;
    while (temp!=NULL)
    {
        cout<<temp->value<<" ";
        temp = temp->next;
    }
    
    return 0;
}