#include<stdio.h>
#include<string.h>


int main(){

    int n;
    scanf("%d",&n);

    char s[n+1], t[n+1];
    scanf("%s%s",s,t);

    int flag=1;

    for(int i=0; i<n; i++){
        if(s[i]!=t[i]){
            if(!(s[i]=='1' && t[i]=='l') && !(s[i]=='l' && t[i]=='1') && !(s[i]=='0' && t[i]=='o') && !(s[i]=='o' && t[i]=='0')){
                flag=0;
                break;
            }
        }
    }

    if(flag==1) printf("Yes\n");
    else printf("No\n");

    return 0;
}