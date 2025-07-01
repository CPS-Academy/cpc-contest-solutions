#include<stdio.h>
#include<string.h>


int main(){

    int n;
    scanf("%d",&n);

    char s[n+1];
    scanf("%s",s);

    for(int i=0; i<n; i++){
        printf("%c%c",s[i],s[i]);
    }

    printf("\n");

    return 0;
}