#include<stdio.h>

int main(){

    char s[101];
    scanf("%s",s);

    int n = strlen(s);

    s[n-1]='4';

    printf("%s\n",s);

    return 0;
}