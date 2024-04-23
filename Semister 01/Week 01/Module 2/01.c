
#include <stdio.h>
int main() 
{
    int num1;
    int num2;
    float num3;
    float num4;

    scanf("%d %d",&num1,&num2);
    scanf("%f %f",&num3,&num4);
    int add = num1+num2;
    int sub = num1-num2;
    float add2 = num3+num4;
    float sub2 = num3-num4;
    printf("%d %d\n%0.1f %0.1f",add,sub,add2,sub2);
    return 0; 
}
