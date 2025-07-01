#include<stdio.h>
#include<string.h>


int main(){

    int n;
    scanf("%d",&n);

    char s[n+1];
    scanf("%s",s);

    int a=0, t=0;

    for(int i=0; i<n; i++){
        if(s[i]=='A') a++;
        else t++;
    }

    if(a>t) printf("A\n");
    else if(a<t) printf("T\n");
    else{
        if(s[n-1]=='T') printf("A\n");
        else printf("T\n");
    }

    return 0;
}