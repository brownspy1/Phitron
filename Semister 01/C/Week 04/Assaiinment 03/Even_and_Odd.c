// Created by M.Mahadi on 2024-05-03 23:48:38
#include <stdio.h>
void odd_even(void){
    int count;
    scanf("%d",&count);
    int arry[count];
    for (int i = 0; i < count; i++)
    {
        scanf("%d",&arry[i]);
    }
    int pls=0,min=0;
    for (int i = 0; i < count; i++)
    {
        if (arry[i]%2==0)
        {
            pls++;
        }
        if (arry[i]%2!=0)
        {
            min++;
        }
    }
    printf("%d %d",pls,min);
} 
int main(){
    odd_even();
    return 0;
}