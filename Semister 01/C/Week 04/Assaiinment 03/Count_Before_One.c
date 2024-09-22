// Created by M.Mahadi on 2024-05-03 20:14:06
#include <stdio.h>
int count_before_one(int arry[],int n){
    int count=0;
    for (int x = 0; x < n; x++)
    {
        if (arry[x]==1)
        {
            return count;
        }   
    count++;
    }
    return count;
} 
//main funtion
int main(){
    int count;
    scanf("%d",&count);
    int arry[count];
    for (int i = 0; i < count; i++)
    {
        scanf("%d",&arry[i]);
    }
    
    printf("%d",count_before_one(arry,count));

    return 0;
}