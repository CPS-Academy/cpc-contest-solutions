#include<stdio.h>
#include<string.h>


int main(){

    char s[6];

    scanf("%s",s);

    int len = strlen(s);

    int flag=1;

    for(int i=0; i<=len-2; i++){
        if(s[i] <= s[i+1]){
            flag=0;
            break;
        }
    }

    if(flag==1) printf("Yes\n");
    else printf("No\n");

    return 0;
}