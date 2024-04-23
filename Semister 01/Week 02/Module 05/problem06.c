#include <stdio.h>

int main() {
    int A, B, C;
    scanf("%d %d %d", &A, &B, &C);

    int min = A;
    int max = A;
// minimam
    if (B<min){
        min = B;
    } if(C<min){
        min = C;
    } if (B>max){
        max = B;

    } if (C>max){
        max = C;
    }

    printf("%d %d", min, max);
    return 0;
}
