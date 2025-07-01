#include<stdio.h>

int main(){

    int h, w;
    scanf("%d%d",&h,&w);

    char arr[h][w];
    char temp;

    scanf("%c",&temp);

    for(int i=0; i<h; i++){
        for(int j=0; j<w; j++){
            scanf("%c",&arr[i][j]);
        }
        scanf("%c",&temp);
    }

    int ans=0;

    for(int i=0; i<h; i++){
        for(int j=0; j<w; j++){
            if(arr[i][j]=='#'){
                ans++;
            }
        }
    }

    printf("%d\n",ans);


    return 0;
}