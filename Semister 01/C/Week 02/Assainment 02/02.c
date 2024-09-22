#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    if (n<0){
        for(int i=n;i <= 0;i++){
            printf("%d ",i);
        }
    }if(n>0){
        for(int i = 1; i <= n; i++){
            printf("%d ",i);
        }
    }
    return 0;
}

#include <stdio.h>

int main() {
    int N;

    scanf("%d", &N);

    // If N is positive:
    if (N > 0) {
        for (int i = 1; i <= N; i++) {
            printf("%d ", i);
        }
    }
        // If N is negative:
    else {
        for (int i = N; i <= 0; i++) {
            printf("%d ", i);
        }
    }

    return 0;
}
