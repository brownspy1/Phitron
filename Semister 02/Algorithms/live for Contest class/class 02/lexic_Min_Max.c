// // Created by M.Mahadi on 2024-10-25 Time:21:05:24
// #include <stdio.h>
// int main(){
//     char a[1005];
//     char b[1005];
//     char c[1005];
//     scanf("%s %s %s",a,b,c);
//     char * min = a;
//     char * max = a;

//     if (strcmp(b,min) < 0) min = b;
//     if (strcmp(c,min) < 0) min = c;

//     if (strcmp(b,max) > 0) max = b;
//     if (strcmp(c,max) > 0) max = c;

//     printf("%s \n%s",min,max);
//     return 0;
// }

#include <stdio.h>
#include <string.h>

int main()
{
    char S1[1001], S2[1001], S3[1001];
    scanf("%s %s %s", S1, S2, S3);
    char min[1001], max[1001];
    strcpy(min, S1);
    strcpy(max, S1);
    if (strcmp(S2, min) < 0)
    {
        strcpy(min, S2);
    }
    if (strcmp(S3, min) < 0)
    {
        strcpy(min, S3);
    }
    if (strcmp(S2, max) > 0)
    {
        strcpy(max, S2);
    }
    if (strcmp(S3, max) > 0)
    {
        strcpy(max, S3);
    }
    printf("%s\n", min);
    printf("%s\n", max);
    return 0;
}
