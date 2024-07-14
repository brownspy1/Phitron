// Created by M.Mahadi on 2024/07/14 Time 18:03:26
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
void insert_at_head(Node * &Head,int value){
    Node *newNode = new Node(value);
    Head = newNode;
}
void insert_at_tail(Node * &Head,int value){
    Node *newNode = new Node(value);
    if (Head == NULL)
    {
        insert_at_head(Head,value);
        return;
    }
    Node *temp = Head;
    while (temp->next!=NULL)
    {
        temp = temp->next;
    }
    // ami akon last node asi
    temp->next = newNode;
}
int main(){
    Node *Head = NULL;
    int value;
    while (true)
    {
        cin>>value;
        if (value==-1) break;
        insert_at_tail(Head,value);
    }
    int frequency[100];
    Node * temp = Head;
    while (temp != NULL)
    {
        frequency[temp->value]++;
        temp = temp->next;
    }
    
    
    return 0;
}