// Created by M.Mahadi on 2024-07-16 Time:16-25-59
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
int count(Node * head){
    int count = 0;
    Node *temp = head;
    while (temp!=NULL)
    {
        count ++;
        temp = temp->next;
    }
    return count;
}
void print(Node * Head){
    Node * temp = Head;
    while (temp!= NULL)
    {
        cout<<temp->value<<" ";
        temp = temp->next;
    }
    cout<<endl;
    
}
void delete_pos(Node *&head,int position){
    if (position == 0)
    {
        Node *deleted = head;
        head = head->next;
        delete deleted;
        return;
    }
    Node *temp = head; 
    for (int i = 1; i < position; i++)
    {
        temp = temp->next;
    }
    
    Node *deleted = temp->next;
    temp->next = temp->next->next;
    delete deleted;
    
}
int main(){
  Node * head = new Node(10);
  Node * a = new Node(20);
  Node * b = new Node(30);
  Node * c = new Node(40);
  Node *tail = c;

  head->next = a;
  a->next= b;
  b->next=c;
  print(head);
  int position;
  cout<<"Position:";
  cin>>position;
  if (position>=count(head))
  {
    cout<<"Invalid Index"<<endl;
  }else
  {
      delete_pos(head,position);
  }
  
  
  print(head);
return 0;
}