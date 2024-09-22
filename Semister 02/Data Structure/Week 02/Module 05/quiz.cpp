// Created by M.Mahadi on 2024-07-10 18:03:53
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
    Node * head = new Node(50);
    Node * a = new Node(60);
    head->next = a;
    Node * temp = head;
    while (temp != NULL)
    {
        cout<<temp->value<<endl;
        temp = temp->next;
    }
    if (temp == NULL)
    {
        cout<<"YES"<<endl;
    }else
    {
        cout<<"NO"<<endl;
    }
    
    
    
    return 0;
}