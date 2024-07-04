// Created by M.Mahadi on 2024-07-04 22:41:27
#include <stdio.h>
void max_min(int ar[],int n,int *min,int *max){

    *min = ar[0];
    *max = ar[0];
    for (int i = 0; i < n ; i++)
    {
        if (ar[i]< *min)
        {
            *min = ar[i];
        }else if (ar[i]> *max)
        {
            *max = ar[i];
        }
        
        
    }
    

}
int main(){
    int n;
    scanf("%d",&n);
    int ar[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &ar[i]);
    }
    
    int min,max;
    max_min(ar,n,&min,&max);
    printf("%d %d",min,max);
    return 0;
}