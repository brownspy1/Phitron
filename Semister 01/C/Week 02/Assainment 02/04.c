#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arry[n];
    int odd = 0;
    int evan = 0;
    for (int i = 0; i < n; i++){
        scanf("%d",&arry[i]);
    }
    for(int i = 0; i < n; i++){
        if (arry[i]>0){
            evan = evan+arry[i];

        } else if(arry[i]<0){

            odd = odd+arry[i];
        }
    }
    printf("%d %d",evan,odd);
    return 0;
}