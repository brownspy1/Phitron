// Created by M.Mahadi on 2024-04-23 18:44:24
#include <stdio.h>
int main(){
    long long int eye,mouths,bodies;
    scanf("%lld %lld %lld",&eye,&mouths,&bodies);
    //finding minimum
    long long int min=eye;
    if (min > mouths) min  = mouths;
    else if (min > bodies) min = bodies;
    // re assaing value
    long long int new_a = (eye-min)/2;
    long long int new_b = mouths-min;
    long long int new_c = bodies-min;
    // chack condison
    if (new_a <= new_c){
        printf("%lld",(new_a+min));
    }else if (new_c <= new_a)
    {
        printf("%lld",(new_c+min));
    }
    return 0;
}
