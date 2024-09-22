// Created by M.Mahadi on 2024-07-16 Time:20-35-35
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
int count(Node *head){
    Node *temp = head;
    int count = 0;
    while (temp!=NULL)
    {
        count++;
        temp = temp->next;
    }
    return count;
}
void insert_link(Node*&Head,Node*&Tail,int value){
    Node *NewNode = new Node(value);
    if (Head == NULL)
    {
        Head = NewNode;
        Tail = NewNode;
        return;
    }
    Tail->next = NewNode;
    Tail = NewNode;
}
int main(){
    //first link_list
    Node* Head1 = NULL;
    Node* tail1 = NULL;
    //secend link_list
    Node* Head2 = NULL;
    Node* tail2 = NULL;

    int value;
    while (true)
    {
        cin>>value;
        if (value == -1) break;
        insert_link(Head1,tail1,value);
    }
    int value2;
    while (true)
    {
        cin>>value2;
        if (value2 == -1) break;
        insert_link(Head2,tail2,value2);
    }

    if (count(Head1) == count(Head2))
    {
        cout<<"YES";
    }else
    {
        cout<<"NO";
    }
    
    
    
    return 0;
}