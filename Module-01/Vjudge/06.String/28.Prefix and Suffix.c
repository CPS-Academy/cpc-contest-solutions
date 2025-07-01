#include<stdio.h>
#include<string.h>


int main(){

    int n, m;
    scanf("%d%d",&n,&m);

    char s[n+1], t[m+1];

    scanf("%s%s",s,t);

    int prefix=1;

    for(int i=0; i<n; i++){
        if(s[i]!=t[i]){
            prefix=0;
            break;
        }
    }

    int suffix=1;

    for(int i=m-n, j=0; i<m; i++, j++){
        if(s[j]!=t[i]){
            suffix=0;
            break;
        }
    }

    if(prefix==1 && suffix==1) printf("0\n");
    else if(prefix==1 && suffix==0) printf("1\n");
    else if(prefix==0 && suffix==1) printf("2\n");
    else printf("3\n");

    return 0;
}