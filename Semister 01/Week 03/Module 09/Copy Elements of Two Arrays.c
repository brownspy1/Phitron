// Created by M.Mahadi on 2024-04-25 13:00:21
#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arry1[n];
    for(int i = 0; i<n;i++){
        scanf("%d",&arry1[i]);
    }
    int n2;
    scanf("%d",&n2);
    int arry2[n2];
    for(int i = 0; i<n2;i++){
        scanf("%d",&arry2[i]);
    }

    int arry[n+n2];
    for (int i = 0; i < n+n2; i++)
    {
        arry[i]=arry1[i];
    }
    int x = n;
    for (int i = 0; i < n2; i++,x++)
    {
        arry[x]=arry2[i];
        
    }
    
    for (int i = 0; i < n+n2; i++)
    {
        printf("%d ",arry[i]);
    }
    

    return 0;
}