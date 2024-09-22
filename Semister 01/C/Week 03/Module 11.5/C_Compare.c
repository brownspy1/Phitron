// Created by M.Mahadi on 2024-05-20 23:13:00
#include <stdio.h>
int compere(char X[],char Y[]){
    for (int i = 0; ; i++)
    {
        if (X[i]=='\0' && Y[i]=='\0')
        {
            return 0;
        }else if (X[i]=='\0')
        {
            return -1;
        }else if (Y[i]=='\0')
        {
            return 1;
        }
        if (X[i]<Y[i])
        {
            return -1;
        }else if (Y[i]<X[i])
        {
            return 1;
        }

    }
    
}
int main(){
    char X[21],Y[21];
    scanf("%s \n %s",&X,&Y);
    int val = compere(X,Y);
    if (val<0)
    {
        printf("%s",X);
    }else if (val>0)
    {
        printf("%s",Y);
    }else if (val == 0)
    {
        printf("%s",X);
    }
    
    
    
    return 0;
}