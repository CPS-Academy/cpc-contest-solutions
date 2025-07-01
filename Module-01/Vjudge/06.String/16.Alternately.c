#include<stdio.h>
#include<string.h>


int main(){

    int n;
    scanf("%d",&n);

    char s[n+1];
    scanf("%s",s);

    int flag=1;

    for(int i=0; i<=n-2; i++){
        if(s[i]==s[i+1]){
            flag=0;
            break;
        }
    }

    if(flag==1) printf("Yes\n");
    else printf("No\n");

    return 0;
}