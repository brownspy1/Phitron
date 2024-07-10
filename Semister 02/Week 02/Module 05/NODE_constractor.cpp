// Created by M.Mahadi on 2024-07-10 14:03:47
#include <iostream>
using namespace std;
class NODE {
    public:
    int value;
    NODE * next;
    
    NODE(int value){
        this->value = value;
        this->next =NULL;
    }
};
int main(){
    NODE a(10),b(20);
    a.next = &b;
    cout<<a.value<<" "<<a.next->value;
    return 0;
}