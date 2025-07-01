#include<stdio.h>
#include<string.h>


int main(){

    int t;
    scanf("%d",&t);

    while(t--){

        int n, k;
        scanf("%d%d",&n,&k);

        char s[n+1];
        scanf("%s",s);

        int ans=0;

        for(int i=0; i<n; i++){
            if(s[i]=='B'){
                ans++;
                //i i+k-1
                //i+k
                i=i+k-1;
            }
        }

        printf("%d\n",ans);
    }

    return 0;
}