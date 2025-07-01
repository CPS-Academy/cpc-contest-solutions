#include<stdio.h>
#include<string.h>


int main(){

    int n;
    scanf("%d",&n);

    char s[n+1];
    scanf("%s",s);

    int freq[3];

    for(int i=0; i<3; i++) freq[i]=0;

    for(int i=0; i<n; i++){
        freq[s[i]-65]++;
        if(freq[0]>0 && freq[1]>0 && freq[2]>0){
            printf("%d\n",i+1);
            break;
        }
    }

    return 0;
}