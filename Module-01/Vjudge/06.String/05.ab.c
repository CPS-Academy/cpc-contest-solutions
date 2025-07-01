#include<stdio.h>
#include<string.h>


int main(){

    int n;
    scanf("%d",&n);

    char s[n+1];
    scanf("%s",s);

    int flag=0;

    for(int i=0; i<=n-2; i++){
        //i first , (i+1) second
        if(s[i]=='a' && s[i+1]=='b') flag=1;
        if(s[i]=='b' && s[i+1]=='a') flag=1;
    }

    if(flag==1) printf("Yes\n");
    else printf("No\n");


    return 0;
}