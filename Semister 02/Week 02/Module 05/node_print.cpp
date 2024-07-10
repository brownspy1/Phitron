// Created by M.Mahadi on 2024-07-10 17:18:49
#include <iostream>
class Node {
    public:
    int value;
    Node * next;
    
    Node(int value){
        this->value = value;
        next =NULL;
    }
};
using namespace std;
int main(){
    Node * head = new Node(10); 
    Node * a = new Node(20); 
    Node * b = new Node(30); 
    Node * c = new Node(40); 

    head->next =a;
    a->next = b;
    b->next =c;
    // while (head!=NULL) // don't move head 
    // {
    //     cout<<head->value<<endl;
    //     head = head->next;
    // }
    Node *temp = head;
    while (temp!=NULL)
    {   
        cout<<temp->value<<endl;
        temp=temp->next;
    }
    cout<<endl;
    temp = head;
    while (temp!=NULL)
    {
        cout<<temp->value<<endl;
        temp=temp->next;
    }
    delete head,a,b,c;
    return 0;
}