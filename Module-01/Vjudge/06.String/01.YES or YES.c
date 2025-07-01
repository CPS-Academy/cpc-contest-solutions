#include<stdio.h>

int main(){

    int t;
    scanf("%d",&t);

    while(t--){
        char s[4];
        scanf("%s",s);

        int flag=1;

        if(s[0]!='y' && s[0]!='Y') flag=0;
        if(s[1]!='e' && s[1]!='E') flag=0;
        if(s[2]!='s' && s[2]!='S') flag=0;

        if(flag==1) printf("YES\n");
        else printf("NO\n");
    }

    return 0;
}