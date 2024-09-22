// Created by M.Mahadi on 2024-08-02 Time:20-40-18
#include <stdio.h>
void recarson(int ar[],int size){
    int i =0;
    if(i == size) return;
    printf("%d \n",ar[i]);
    i=i+1;
    recarson(ar,size);
}
// void recarson(int ar[],int size,int i){
//     if(i == size) return;
//     printf("%d \n",ar[i]);
//     recarson(ar,size,i+1);
// }
int main(){
    int n;
    scanf("%d",&n);
    int a[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&a[i]);
    }
    recarson(a,n);
    return 0;
}