#include <stdio.h>
#include <string.h>
int main(){
   int i, j, n;
   char name[50];
   int len;
   printf("Enter your name: ");
   gets(name);
   printf("Enter no of rows: ");
   scanf("%d", &n);
   len = strlen(name);
   // Print upper part of the gun shape with stars
   for(i=n/2; i<=n; i+=2){
      for(j=1; j<n-i; j+=2){
         printf(" ");
      }
      for(j=1; j<=i; j++){
         printf("M");
      }
      for(j=1; j<=n-i; j++){
         printf(" ");
      }
      for(j=1; j<=i; j++){
         printf("M");
      }
      printf("\n");
   }
   // Prints lower rectangle part with stars
   for(i=n; i>=1; i--){
      for(j=i; j<n; j++){
         printf(" ");
      }
      // Print the name on screen
      if(i == n){
         for(j=1; j<=(n * 2-len)/2; j++){
            printf("M");
         }
         printf("%s", name);
         for(j=1; j<(n*2-len)/2; j++){
            printf("M");
         }
      }else{
         for(j=1; j<=(i*2)-1; j++){
            printf("M");
         }
      }
      printf("\n");
   }
   return 0;
}