#include<stdio.h>

int main(){

    int h, w;
    scanf("%d%d",&h,&w);

    char A[h][w], B[h][w], temp;

    scanf("%c",&temp);

    for(int i=0; i<h; i++){
        for(int j=0; j<w; j++){
            scanf("%c",&A[i][j]);
        }
        scanf("%c",&temp);
    }

    for(int i=0; i<h; i++){
        for(int j=0; j<w; j++){
            scanf("%c",&B[i][j]);
        }
        scanf("%c",&temp);
    }

    int flag=0;
    for(int s=0; s<h; s++){
        for(int t=0; t<w; t++){
            int flag2=1;
            for(int i=0; i<h; i++){
                for(int j=0; j<w; j++){
                    int currentvalue=A[(i+s)%h][(j+t)%w];
                    if(currentvalue!=B[i][j]){
                        flag2=0;
                    }
                }
            }
            if(flag2==1){
                flag=1;
            }
        }
    }

    if(flag==1) printf("Yes\n");
    else printf("No\n");

    return 0;
}