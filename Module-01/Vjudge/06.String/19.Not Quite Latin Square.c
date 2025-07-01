#include<stdio.h>
#include<string.h>


int main(){

    int t;
    scanf("%d",&t);

    while(t--){
        char s[3][4];

        for(int i=0; i<3; i++){
            scanf("%s",s[i]);
        }

        int freq[3];

        for(int i=0; i<3; i++) freq[i]=0;

        for(int i=0; i<3; i++){
            for(int j=0; j<3; j++){
                if(s[i][j]!='?'){
                    freq[s[i][j]-65]++;
                }
            }
        }

        if(freq[0]==2) printf("A\n");
        else if(freq[1]==2) printf("B\n");
        else printf("C\n");
    }

    return 0;
}