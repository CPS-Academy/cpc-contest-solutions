#include<stdio.h>

int main(){

    int r, c;
    scanf("%d%d",&r,&c);

    char arr[r][c];
    char temp;

    scanf("%c",&temp);

    for(int i=0; i<r; i++){
        for(int j=0; j<c; j++){
            scanf("%c",&arr[i][j]);
        }
        scanf("%c",&temp);
    }

    for(int i=0; i<r; i++){
        for(int j=0; j<c; j++){
            if('1'<=arr[i][j] && arr[i][j]<='9'){
                int power=arr[i][j]-'0';
                for(int i2=0; i2<r; i2++){
                    for(int j2=0; j2<c; j2++){
                        if(arr[i2][j2]=='#'){
                            int dist=abs(i-i2)+abs(j-j2);
                            if(dist<=power){
                                arr[i2][j2]='.';
                            }
                        }
                    }
                }
                arr[i][j]='.';
            }
        }
    }

    for(int i=0; i<r; i++){
        for(int j=0; j<c; j++){
            printf("%c",arr[i][j]);
        }
        printf("\n");
    }

    return 0;
}