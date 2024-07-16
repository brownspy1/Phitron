// Created by M.Mahadi on 2024-07-16 Time:14-03-07
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

void print(Node * Head){
    Node * temp = Head;
    while (temp!= NULL)
    {
        cout<<temp->value<<" ";
        temp = temp->next;
    }
    
}
int main(){
  Node * head = new Node(10);
  Node * a = new Node(20);
  Node * b = new Node(30);
  Node * c = new Node(40);

  head->next = a;
  a->next= b;
  b->next=c;
  print(head);
return 0;
}