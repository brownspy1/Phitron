// Created by M.Mahadi on 2024/07/14 Time 22:23:12
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
void insert_link_List(Node*&Head, int value){
    Node *newNode = new Node(value);
    if (Head==NULL)
    {
        Head = newNode;
        return;
    }
    

    
}
int main(){
    Node * head =NULL;
    return 0;
}