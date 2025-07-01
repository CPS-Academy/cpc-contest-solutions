#include<stdio.h>
#include<string.h>


int main(){

    int t;
    scanf("%d",&t);

    while(t--){
        char s[7];
        scanf("%s",s);

        int frst = (s[0]-48)+(s[1]-48)+(s[2]-48);
        int lst = (s[3]-48)+(s[4]-48)+(s[5]-48);

        if(frst==lst) printf("YES\n");
        else printf("NO\n");
    }

    return 0;
}