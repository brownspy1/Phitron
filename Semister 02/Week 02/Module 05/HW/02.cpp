// Created by M.Mahadi on 2024-07-10 20:29:37
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

    head->next = a;
    a->next = b;
    b->next = c;

    int Sum = 0;
    Node * temp = head;
    
    while( temp!= NULL){
	    Sum += temp->value;
	    temp = temp->next;
    }
        Sum -= temp -> value;
        cout<<Sum;
    return 0;
}