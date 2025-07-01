#include<stdio.h>
#include<string.h>


int main(){

    int n;
    scanf("%d",&n);

    char s[n+1];
    scanf("%s",s);

    int cnt=0, flag=0;

    for(int i=0; i<n; i++){
        if(s[i]=='|') cnt++;
        if(s[i]=='*'){
            if(cnt==1){
                flag=1;
            }
            else{
                flag=0;
            }
            break;
        }
    }

    if(flag==1) printf("in\n");
    else printf("out\n");

    return 0;
}