// Created by M.Mahadi on 2024-07-16 Time:14-20-19
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
    cout<<endl;
    
}
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
void insart_at_head(Node *&head,int value){
  Node *newNode = new Node(value);
  newNode->next = head;
  head = newNode;
}
void insert_at_tail(Node *&tail,int value){
  Node * newNode = new Node(value);
  tail->next = newNode;
  tail = newNode  ;

}
void instar_any_position(Node *&Head,int position,int value){
  Node *newNode = new Node(value);
  
  
  Node *temp = Head;
  for (int i = 1; i < position; i++)
  {
   temp =  temp->next; 
  }
  newNode->next = temp->next;
  temp->next = newNode;
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
  int position;
  print(head);
  cout<<"Enter position:";
  cin>>position;
  int value;
  cout<<"Enter Value:";
  cin>>value;
  if (position == 0)
  {
    insart_at_head(head,value);
    print(head);
  }else if (position == count(head))
  {
    insert_at_tail(tail,value);
    print(head);
  }else if (position<count(head))

  {
    instar_any_position(head,position,value);
    print(head);
  }else
  {
     cout<<"Invalid index!";
  }
  
  
  
  
return 0;
}