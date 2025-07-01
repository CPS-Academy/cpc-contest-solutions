#include<stdio.h>
#include<string.h>


int main(){

    int t;
    scanf("%d",&t);

    while(t--){
        char s[6];
        scanf("%s",s);

        int len = strlen(s);
        int cnt = 0;

        for(int i=0; i<len; i++){
            if(s[i]!='0') cnt++;
        }

        printf("%d\n",cnt);

        for(int i=0; i<len; i++){
            if(s[i]!='0'){
                printf("%c",s[i]);

                int zeros = len-i-1;
                for(int j=0; j<zeros; j++){
                    printf("0");
                }

                printf(" ");
            }
        }

        printf("\n");

    }

    return 0;
}