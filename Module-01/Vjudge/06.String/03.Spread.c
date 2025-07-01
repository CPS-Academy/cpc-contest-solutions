#include<stdio.h>

int main(){

    char s[101];

    scanf("%s",s);

    int n = strlen(s);

    for(int i=0; i<n; i++){
        printf("%c",s[i]);
        if(i!=n-1) printf(" ");
        else printf("\n");
    }

    return 0;
}