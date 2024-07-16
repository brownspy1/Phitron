// Created by M.Mahadi on 2024-07-16 Time:17-14-14
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
void Insart_all(Node*&Head,int value){
    Node * newNode = new Node(value);
    
    if (Head == NULL)
    {
        Head = newNode;
        return;    
    }
    Node * temp = Head;
    while (temp->next!=NULL)
    {
        temp = temp->next;
    }
    temp->next = newNode;

}
void insert_tail(Node *&Head,Node *&tail,int value){
    Node *newNode = new Node(value);
    if (Head == NULL)
    {
        Head = newNode;
        tail = newNode;
        return;
    }
    tail->next = newNode;
    tail = newNode;
    
}
void print(Node *Head){
    Node * Temp = Head;
    while (Temp!=NULL)
    {
        cout<<Temp->value<<" ";
        Temp = Temp->next;
    }
    cout<<endl;
}
int count(Node *Head){
    int count = 0;
    Node *temp = Head;
    while (temp!=NULL)
    {
        count++;
        temp = temp->next;
    }
    return count;
}
void Deleted(Node*&Head,int position){ 
    if (position >= count(Head) || Head == NULL)
    {
        cout<<"Invalid Position"<<endl;
    }else
    {
        if (position == 0)
        {
            Node* Deleted = Head;
            Head = Head->next;
            delete Deleted; 
        }else
        {
            Node * temp = Head;
            for (int i = 1; i < position; i++)
            {
                temp = temp->next;
            }
            Node*Deleted = temp->next;
            temp->next = temp->next->next;
            delete Deleted;
        }
        
        
    }
    
    

}
int main(){
    Node *head = NULL;
    Node *tail = NULL;
    while (true)
    {

        int option;
        cout<<endl
        <<"1.Insart all"<<endl
        <<"2.Print all"<<endl
        <<"3.Insert Tail"<<endl
        <<"4.Delete last"<<endl
        <<"Enter:";
        cin>>option;
        switch (option)
        {
            case 1:
                int value;
                while (true)
                {
                    cin>>value;
                    if(value == -1) break;
                    Insart_all(head,value);
                }
            case 2:
                print(head);
            case 3:
                int value;
                cout<<"Entar Value:";
                cin>>value;
                insert_tail(head,tail,value);
            case 4:
                int position;
                cout<<"Entar a Deleted position:";
                Deleted(head,position);
            case 5:
                break;
            default:
                break;
        }
        
    }
    return 0;
}