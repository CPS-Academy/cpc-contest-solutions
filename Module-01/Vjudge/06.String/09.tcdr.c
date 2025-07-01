#include<stdio.h>
#include<string.h>


int main(){

    char s[101];

    scanf("%s",s);

    int n = strlen(s);

    for(int i=0; i<n; i++){
        if(s[i]!='a' && s[i]!='e' && s[i]!='i' && s[i]!='o' && s[i]!='u'){
            printf("%c",s[i]);
        }
    }

    printf("\n");

    return 0;
}