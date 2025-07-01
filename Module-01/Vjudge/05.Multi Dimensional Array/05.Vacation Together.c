#include<stdio.h>

int main(){

    int n, d;
    scanf("%d%d",&n,&d);

    char arr[n][d];
    char temp;

    scanf("%c",&temp);

    for(int i=0; i<n; i++){
        for(int j=0; j<d; j++){
            scanf("%c",&arr[i][j]);
        }
        scanf("%c",&temp);
    }

    int free[d];

    for(int j=0; j<d; j++){
        int got=0;
        for(int i=0; i<n; i++){
            if(arr[i][j]=='x'){
                got=1;
                break;
            }
        }
        if(got==1) free[j]=0;
        else free[j]=1;
    }

    int ans=0;

    for(int j=0; j<d; j++){
        if(free[j]==1){
            int len=1;
            for(int j2=j+1; j2<d; j2++){
                if(free[j2]==1){
                    len++;
                }
                else{
                    break;
                }
            }
            if(len>ans){
                ans=len;
            }
        }
    }

    printf("%d\n",ans);





    return 0;
}