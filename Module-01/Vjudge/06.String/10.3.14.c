#include<stdio.h>
#include<string.h>


int main(){

    char pi[] = "1415926535897932384626433832795028841971693993751058209749445923078164062862089986280348253421170679";

    int n;
    scanf("%d",&n);

    printf("3.");

    for(int i=0; i<n; i++){
        printf("%c",pi[i]);
    }

    printf("\n");



    return 0;
}