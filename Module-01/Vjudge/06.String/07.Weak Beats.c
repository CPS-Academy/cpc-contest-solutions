#include<stdio.h>
#include<string.h>


int main(){

    char s[17];

    scanf("%s",s);

    int flag=0;

    for(int i=1; i<16; i+=2){
        if(s[i]=='1') flag=1;
    }

    if(flag==1) printf("No\n");
    else printf("Yes\n");

    return 0;
}