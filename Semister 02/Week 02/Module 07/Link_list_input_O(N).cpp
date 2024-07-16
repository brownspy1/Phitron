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
int main(){
    while (true)
    {
        
        cout<<"1.Insart"<<endl<<"2.Print";
    }
    
    return 0;
}