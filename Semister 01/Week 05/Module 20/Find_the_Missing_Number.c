// Created by M.Mahadi on 2024-05-10 18:16:01
#include <stdio.h>
#include <math.h>
int main(){
    int count;
    scanf("%d",&count);
    for (int i = 0; i < count; i++)
    {
        int n=4;
        long long int arry[n];
        
        for (int x = 0; x < n; x++)
        {
            scanf("%lld",&arry[x]);
        }
        

        double result = (double)arry[0]/arry[1]/arry[2]/arry[3];



        if (fmod(result,1.0)!=0.0)
        {
            printf("-1\n");
        }else
        {
            printf("%.0lf\n",result);
        }      
    }
  
    return 0;
}