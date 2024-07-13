// Created by M.Mahadi on 2024/07/13 Time 18:03:44
#include <iostream>
using namespace std;
void fun(int * &p){
    *p = NULL;
    cout<<*p<<endl;
}
int main(){
    int x = 50;
    int * m = &x;
    fun(m);
    cout<<*m<<endl;
    return 0;
}