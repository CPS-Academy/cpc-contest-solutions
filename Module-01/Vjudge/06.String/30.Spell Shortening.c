#include<stdio.h>
#include<string.h>


int main(){

    int t;
    scanf("%d",&t);

    while(t--){
        int n;
        scanf("%d",&n);

        char s[n+1];
        scanf("%s",s);

        int ind = -1;

        for(int i=0; i<=n-2; i++){
            if(s[i]>s[i+1]){
                ind=i;
                break;
            }
        }

        if(ind==-1){
            ind=n-1;
        }

        for(int i=0; i<n; i++){
            if(i==ind) continue;
            printf("%c",s[i]);
        }

        printf("\n");


    }

    return 0;
}