// Created by M.Mahadi on 2024-04-30 20:43:54
#include <stdio.h>
int adding(){
    int a,b;
    scanf("%d %d",&a,&b);
    int f = a%b;
    return f;
}

int div(void){
    int a,b;
    scanf("%d %d",&a,&b);
    int divi = a/b;
    return divi;
}

int main(){
    int store = adding();
    printf("%d\n",store);
    int divison = div();
    printf("%d\n",divison);
    return 0;
}