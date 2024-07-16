// Created by M.Mahadi on 2024-07-16 Time:19-43-06
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
void print_recarcive(Node*h){
    Node*Temp = h;
    if (Temp==NULL) return;
    cout<<Temp->value<<" ";
    print_recarcive(Temp->next);
    
}
void print_revarce(Node*h){
    Node*Temp = h;
    if (Temp==NULL) return;
    print_recarcive(Temp->next);
    cout<<Temp->value<<" ";
    
}
int main(){
    Node * head = new Node(10);
    Node * a = new Node(20);
    Node * b = new Node(30);
    Node * c = new Node(40);

    head->next = a;
    a->next= b;
    b->next=c;
    print_recarcive(head);
    cout<<endl;
    print_revarce(head);
    return 0;
}