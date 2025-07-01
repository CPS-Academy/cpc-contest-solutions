#include<stdio.h>

int main(){

    int h, w;
    scanf("%d%d",&h,&w);

    int A[h][w];

    for(int i=0; i<h; i++){
        for(int j=0; j<w; j++){
            scanf("%d",&A[i][j]);
        }
    }

    for(int i=0; i<h; i++){
        for(int j=0; j<w; j++){
            if(A[i][j]==0){
                printf(".");
            }
            else{
                printf("%c",64+A[i][j]);
            }
        }
        printf("\n");
    }

    return 0;
}