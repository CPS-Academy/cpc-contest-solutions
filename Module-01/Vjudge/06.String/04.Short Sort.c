#include<stdio.h>
#include<string.h>


int main(){

    int t;
    scanf("%d",&t);

    while(t--){

        char s[4];
        scanf("%s",s);

        int flag=0;

        if(s[0]=='a' && s[1]=='b' && s[2]=='c') flag=1;

        //0 1 swap
        char temp = s[1];
        s[1]=s[0];
        s[0]=temp;

        if(s[0]=='a' && s[1]=='b' && s[2]=='c') flag=1;

        temp = s[1];
        s[1]=s[0];
        s[0]=temp;

        //0 2 swap
        temp = s[2];
        s[2]=s[0];
        s[0]=temp;

        if(s[0]=='a' && s[1]=='b' && s[2]=='c') flag=1;

        temp = s[2];
        s[2]=s[0];
        s[0]=temp;

        //1 2 swap
        temp = s[2];
        s[2]=s[1];
        s[1]=temp;

        if(s[0]=='a' && s[1]=='b' && s[2]=='c') flag=1;

        temp = s[2];
        s[2]=s[1];
        s[1]=temp;

        if(flag==1) printf("YES\n");
        else printf("NO\n");


    }

    return 0;
}