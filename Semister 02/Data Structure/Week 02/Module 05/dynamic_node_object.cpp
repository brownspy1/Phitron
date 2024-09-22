// Created by M.Mahadi on 2024-07-10 16:52:03
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
    Node * head = new Node(105);
    Node * a = new Node(202);
    head->next = a;
    cout<<head->value<<" "<<head->next->value<<endl;
    delete head;
    delete a;
    cout<<head->value<<" "<<head->next->value;
    return 0;
}