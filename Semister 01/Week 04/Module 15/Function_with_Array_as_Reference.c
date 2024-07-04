// Created by M.Mahadi on 2024-07-04 19:55:55
#include <stdio.h>
void fun(int *list,int n){
    for (int i = 0; i < n; i++)
    {
        printf("from fun - %d \n",*(list+i));
    }
    list[0]=500;
    

}
int main(){
    int list[5]={10,20,30,40,50};
    fun(list,5);
    for (int i = 0; i < 5; i++)
    {
        printf("%d ",*(list+i));
    }
    
    return 0;
}