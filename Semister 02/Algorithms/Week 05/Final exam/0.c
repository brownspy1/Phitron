// #include<stdio.h>
// int main(){
//     int a,b,c;
//     scanf("%d %d %d",&a,&b,&c);
//     int max = a;
//     if (b <max) max = b;
//     if (c <max) max = c;
//     printf("%d",max);   
//     return 0;
// }

// //----------------------------------------------------
#include<stdio.h>
int main(){
    int a,b,c;
    scanf("%d %d %d", &a, &b, &c);
    printf("%d", (a < b ? (a < c ? a : c) : (b < c ? b : c)));
    return 0;
}