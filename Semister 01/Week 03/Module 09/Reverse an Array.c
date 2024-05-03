// Created by M.Mahadi on 2024-04-25 12:19:52
#include <stdio.h>
int main(){
    int n;
    scanf("%d ",&n);
    int arry[n];
    for (int i =0; i<n; i++){
        scanf("%d",&arry[i]);
    }

    int i=0,x=n-1;

   
    for (i; x>i ;i++,x--)
        {
        //    int temp = arry[i];
        //    arry[i] = arry[x];
        //    arry[x] = temp; 
        printf("%d %d\n",i,x);
        }

    // while (i<x)
    // {
    //        int temp = arry[i];
    //        arry[i] = arry[x];
    //        arry[x] = temp; 
    //        i++;
    //        x--;
    // }
    
    // for (int i = 0; i < n; i++)
    // {
    //     printf("%d ",arry[i]);
    // }
    
    return 0;
}