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

    for(int i=0; i<h; i++){
        for(int j=0; j<w; j++){
            //1
            if(0<=i && i<h && 0<=j+4 && j+4<w){
                if(arr[i][j]=='s' && arr[i][j+1]=='n' && arr[i][j+2]=='u' && arr[i][j+3]=='k' && arr[i][j+4]=='e'){
                    printf("%d %d\n%d %d\n%d %d\n%d %d\n%d %d\n",i+1,j+1,i+1,j+2,i+1,j+3,i+1,j+4,i+1,j+5);
                    return 0;
                }
            }
            //2
            if(0<=i && i<h && 0<=j-4 && j-4<w){
                if(arr[i][j]=='s' && arr[i][j-1]=='n' && arr[i][j-2]=='u' && arr[i][j-3]=='k' && arr[i][j-4]=='e'){
                    printf("%d %d\n%d %d\n%d %d\n%d %d\n%d %d\n",i+1,j+1,i+1,j-1+1,i+1,j-2+1,i+1,j-3+1,i+1,j-4+1);
                    return 0;
                }
            }
            //3
            if(0<=i-4 && i-4<h && 0<=j && j<w){
                if(arr[i][j]=='s' && arr[i-1][j]=='n' && arr[i-2][j]=='u' && arr[i-3][j]=='k' && arr[i-4][j]=='e'){
                    printf("%d %d\n%d %d\n%d %d\n%d %d\n%d %d\n",i+1,j+1,i-1+1,j+1,i-2+1,j+1,i-3+1,j+1,i-4+1,j+1);
                    return 0;
                }
            }
            //4
            if(0<=i+4 && i+4<h && 0<=j && j<w){
                if(arr[i][j]=='s' && arr[i+1][j]=='n' && arr[i+2][j]=='u' && arr[i+3][j]=='k' && arr[i+4][j]=='e'){
                    printf("%d %d\n%d %d\n%d %d\n%d %d\n%d %d\n",i+1,j+1,i+1+1,j+1,i+2+1,j+1,i+3+1,j+1,i+4+1,j+1);
                    return 0;
                }
            }
            //5
            if(0<=i-4 && i-4<h && 0<=j-4 && j-4<w){
                if(arr[i][j]=='s' && arr[i-1][j-1]=='n' && arr[i-2][j-2]=='u' && arr[i-3][j-3]=='k' && arr[i-4][j-4]=='e'){
                    printf("%d %d\n%d %d\n%d %d\n%d %d\n%d %d\n",i+1,j+1,i-1+1,j-1+1,i-2+1,j-2+1,i-3+1,j-3+1,i-4+1,j-4+1);
                    return 0;
                }
            }
            //6
            if(0<=i+4 && i+4<h && 0<=j+4 && j+4<w){
                if(arr[i][j]=='s' && arr[i+1][j+1]=='n' && arr[i+2][j+2]=='u' && arr[i+3][j+3]=='k' && arr[i+4][j+4]=='e'){
                    printf("%d %d\n%d %d\n%d %d\n%d %d\n%d %d\n",i+1,j+1,i+1+1,j+1+1,i+2+1,j+2+1,i+3+1,j+3+1,i+4+1,j+4+1);
                    return 0;
                }
            }
            //7
            if(0<=i-4 && i-4<h && 0<=j+4 && j+4<w){
                if(arr[i][j]=='s' && arr[i-1][j+1]=='n' && arr[i-2][j+2]=='u' && arr[i-3][j+3]=='k' && arr[i-4][j+4]=='e'){
                    printf("%d %d\n%d %d\n%d %d\n%d %d\n%d %d\n",i+1,j+1,i-1+1,j+1+1,i-2+1,j+2+1,i-3+1,j+3+1,i-4+1,j+4+1);
                    return 0;
                }
            }
            //8
            if(0<=i+4 && i+4<h && 0<=j-4 && j-4<w){
                if(arr[i][j]=='s' && arr[i+1][j-1]=='n' && arr[i+2][j-2]=='u' && arr[i+3][j-3]=='k' && arr[i+4][j-4]=='e'){
                    printf("%d %d\n%d %d\n%d %d\n%d %d\n%d %d\n",i+1,j+1,i+1+1,j-1+1,i+2+1,j-2+1,i+3+1,j-3+1,i+4+1,j-4+1);
                    return 0;
                }
            }
        }
    }

    return 0;
}


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

    int dx[9]={-1,0,0,-1,1,-1,1,-1,1};
    int dy[9]={-1,1,-1,0,0,-1,1,1,-1};

    for(int i=0; i<h; i++){
        for(int j=0; j<w; j++){
            for(int k=1; k<=8; k++){
                int i2=i, j2=j;

                //snuke
                char word[]="snuke";
                int flag=1;
                for(int l=0; l<5; l++){
                    if(0<=i2 && i2<h && 0<=j2 && j2<w){
                        if(arr[i2][j2]!=word[l]){
                            flag=0;
                            break;
                        }
                        i2+=dx[k];
                        j2+=dy[k];
                    }
                    else{
                        flag=0;
                        break;
                    }
                }
                if(flag==1){
                    i2=i, j2=j;
                    for(int l=0; l<5; l++){
                        printf("%d %d\n",i2+1,j2+1);
                        i2+=dx[k];
                        j2+=dy[k];
                    }
                    return 0;
                }
            }
        }
    }

    return 0;
}