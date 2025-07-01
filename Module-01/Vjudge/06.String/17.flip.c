#include<stdio.h>
#include<string.h>


int main(){

    char s[11];
    scanf("%s",s);

    int n = strlen(s);

    for(int i=0; i<n; i++){
        if(s[i]=='0') printf("1");
        else printf("0");
    }

    printf("\n");

    return 0;
}