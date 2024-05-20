#include <stdio.h>
#include <string.h>


void copy(char a[], char b[]){
    for (int i = 0; i <= strlen(b); i++){
        a[i] = b[i];
    }

}

int main(){
    char a[100], b[100];
    scanf("%s %s",&a,&b);
    // copy(a, b); //usar defain funson
    strcpy(a,b);  // string.h hedar building funtion
    printf("%s",a);
    return 0;
}
