#include<stdio.h>

int main(){

    char arr[8][8];
    char temp;

    for(int i=0; i<8; i++){
        for(int j=0; j<8; j++){
            scanf("%c",&arr[i][j]);
        }
        scanf("%c",&temp);
    }

    int r, c;

    for(int i=0; i<8; i++){
        for(int j=0; j<8; j++){
            if(arr[i][j]=='*'){
                r=i, c=j;
                break;
            }
        }
    }

    printf("%c%d\n",97+c,8-r);

    return 0;
}