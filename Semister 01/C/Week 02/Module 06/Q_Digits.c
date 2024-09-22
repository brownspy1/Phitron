// Created by M.Mahadi on 2024-04-23 17:06:06
#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    for (int h = 1; h <=n; h++){
        int a;
        scanf("%d",&a);
        do
        {
            printf("%d ",a%10);
            a = a/10;
            
        } while (a!=0);
        printf("\n");        
    }
    return 0;
}