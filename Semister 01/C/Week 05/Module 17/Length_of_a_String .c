// Created by M.Mahadi on 2024-08-08 Time:01-33-15
#include <stdio.h>
int len(char ar[],int i){
    if (ar[i]=='\0') return 0;
    int l = len(ar,i+1);
    return l+1;
}
int main(){
    int n;
    scanf("%d",&n);
    char ar[n];
    getchar();
    for (int i = 0; i < n; i++)
    {
        scanf(" %c",&ar[i]);
    }
    ar[n] = '\0';
    int h = len(ar,0);
    printf("%d",h);
    return 0;
}