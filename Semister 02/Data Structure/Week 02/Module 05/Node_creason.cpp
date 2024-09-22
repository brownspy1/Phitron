// Created by M.Mahadi on 2024-07-10 13:48:16
#include <iostream>
using namespace std;
class NODE{
    public:
    int val;
    NODE* next;
};
int main(){
    NODE a,b;
    a.val = 10;
    b.val = 20;
    
    a.next = &b;
    b.next = NULL;
    cout<<a.val<<" "<<a.next->val;
    return 0;
}