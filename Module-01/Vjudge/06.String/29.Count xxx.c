#include<stdio.h>
#include<string.h>


int main(){

    int n;
    scanf("%d",&n);

    char s[n+1];
    scanf("%s",s);

    int mxfreq[26];
    for(int i=0; i<26; i++){
        mxfreq[i]=0;
    }

    int currentfreq=1;
    for(int i=1; i<n; i++){
        if(s[i]==s[i-1]){
            currentfreq++;
        }
        else{
            if(mxfreq[s[i-1]-97]<currentfreq){
                mxfreq[s[i-1]-97] = currentfreq;
            }
            currentfreq=1;
        }
    }
    if(mxfreq[s[n-1]-97]<currentfreq){
        mxfreq[s[n-1]-97]=currentfreq;
    }

    int ans=0;

    for(int i=0; i<26; i++){
        ans+=mxfreq[i];
    }

    printf("%d\n",ans);

    return 0;
}