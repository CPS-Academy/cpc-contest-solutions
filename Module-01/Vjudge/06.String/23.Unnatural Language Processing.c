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

        char s2[n+1];
        for(int i=0; i<n; i++){
            if(s[i]=='a' || s[i]=='e') s2[i]='V';
            else s2[i]='C';
        }

        for(int i=0; i<n; i++){
            //i i+1
            //C V
            if(i+2==n){
                printf("%c%c",s[i],s[i+1]);
                break;
            }
            else if(i+2==n-1){
                printf("%c%c%c",s[i],s[i+1],s[i+2]);
                break;
            }
            if(s2[i+3]=='V'){
                printf("%c%c.",s[i],s[i+1]);
                i++;
            }
            else{
                printf("%c%c%c.",s[i],s[i+1],s[i+2]);
                i+=2;
            }
        }

        printf("\n");
    }

    return 0;
}