#include<stdio.h>

int main(){

    int h, w, x, y;
    scanf("%d%d%d%d",&h,&w,&x,&y);
    x--, y--;

    char arr[h][w];
    char temp;

    scanf("%c",&temp);

    for(int i=0; i<h; i++){
        for(int j=0; j<w; j++){
            scanf("%c",&arr[i][j]);
        }
        scanf("%c",&temp);
    }

    int ans=1;

    for(int j=y+1; j<w; j++){
        if(arr[x][j]=='.') ans++;
        else{
            break;
        }
    }

    for(int j=y-1; j>=0; j--){
        if(arr[x][j]=='.') ans++;
        else{
            break;
        }
    }

    for(int i=x-1; i>=0; i--){
        if(arr[i][y]=='.') ans++;
        else{
            break;
        }
    }

    for(int i=x+1; i<h; i++){
        if(arr[i][y]=='.') ans++;
        else{
            break;
        }
    }

    printf("%d\n",ans);


    return 0;
}