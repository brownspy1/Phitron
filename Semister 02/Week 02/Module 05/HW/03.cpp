// Created by M.Mahadi on 2024-07-12 18:01:10
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
    Node *head = new Node(10);
    Node *a = new Node(5);
    Node *b = new Node(20);
    Node *c = new Node(0);
    Node *e = new Node(30);

    head->next = a;
    a->next = b;
    b->next = c;
    c->next = e;
    int sum = 0;
    Node * temp = head;
    while (temp!= NULL)
    {
        cout<<temp->value<<endl;
        sum+=temp->value;
        temp = temp->next;
    }
    cout<<" Sum amount: "<<sum;
     
    return 0;
}