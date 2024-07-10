// Created by M.Mahadi on 2024-07-10 20:25:51
#include <iostream>
using namespace std;
class Node {
    public:
    int value;
    Node * next;
    
    Node(int value){
        this->value = value;
        next =NULL;
    }
};
int main(){
    Node * head = new Node(5);
    Node * a = new Node(7);
    Node * b = new Node(1);
    Node * c = new Node(14);
    Node * d = new Node(3);
    Node * e = new Node(11);

    head->next = a;
    a->next = b;
    b->next = c;
    c->next = d;
    d->next = e;

    cout<< head->next->next->value;

    return 0;
}