// Created by M.Mahadi on 2024-05-03 21:16:37
#include <stdio.h>
#include <string.h>
int is_palindrome(char arry[]) {
    int n = strlen(arry);
    int k=n-1;
    int flag = 1;
    for (int i = 0; i<k; i++,k--)
    {
        if (arry[i]!=arry[k])
        {
            flag = 0;
            break;
        }
    }
    return flag;

}
int main(){
    char arry[1001];
    scanf("%s",&arry);
    int flag = is_palindrome(arry);
    if (flag==1)
    {
        printf("Palindrome");
    }else
    {
        printf("Not Palindrome");
    }

    return 0;
}