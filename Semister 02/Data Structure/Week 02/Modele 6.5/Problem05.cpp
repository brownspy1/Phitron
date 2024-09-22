// Created by M.Mahadi on 2024/07/14 Time 23:53:36
#include <iostream>
using namespace std;
class Node{
    public:
    int value;
    Node* next;
    Node(int value){
        this->value = value;
        this->next = NULL;
    }
};
void insert_value_in_link_list(Node* &head, int value){
    Node *newNode = new Node(value);
    if (head==NULL)
    {
        head = newNode;
        return;
    }
    Node* temp = head;
    while (temp->next!=NULL)
    {
        temp = temp->next;
    }
    temp->next = newNode;
}
bool check_sorted(Node *head){
    Node*temp = head;
    while (temp!=NULL && temp->next!=NULL)
    {
        if (temp->value > temp->next->value)
        {
            return false;
        }
        temp = temp->next; 
    }
    return true;
}
int main(){
    Node *head = NULL;
    int value;
    while (true)
    {
        cin>>value;
        if (value == -1)break;
        insert_value_in_link_list(head,value);
    }
   

    if (check_sorted(head))
    {
        cout<<"YES";
    }else{
        cout<<"NO";
    }

    
    return 0;
}