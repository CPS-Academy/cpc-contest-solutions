#include<stdio.h>

int main(){

    int h, w;
    scanf("%d%d",&h,&w);

    int arr[h][w];

    for(int i=0; i<h; i++){
        for(int j=0; j<w; j++){
            scanf("%d",&arr[i][j]);
        }
    }

    for(int j=0; j<w; j++){
        for(int i=0; i<h; i++){
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }


    return 0;
}