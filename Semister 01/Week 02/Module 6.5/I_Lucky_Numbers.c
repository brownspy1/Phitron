// Created by M.Mahadi on 2024-04-23 18:09:29
#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int a = n/10;
    int b = n%10;
    if(a==0){
        if(b!=0){
            printf("YES");
        }else{
            printf("NO");
        }
        
    }else if (b==0)
    {
        if(a!=0){
            printf("YES");
        }else{
            printf("NO");
        }
    }
     else if (a%b ==0 ||b%a ==0)
    {
        printf("YES");
    }else{
        printf("NO");
    }
    
    return 0;
}