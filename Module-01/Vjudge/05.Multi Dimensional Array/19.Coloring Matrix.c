#include<stdio.h>

int main(){

    int n;
    scanf("%d",&n);

    int A[n+1][n+1], B[n+1][n+1], temp[n+1][n+1];

    for(int i=1; i<=n; i++){
        for(int j=1; j<=n; j++){
            scanf("%d",&A[i][j]);
        }
    }

    for(int i=1; i<=n; i++){
        for(int j=1; j<=n; j++){
            scanf("%d",&B[i][j]);
        }
    }

    int flag=0;

    for(int k=0; k<4; k++){
        int flag2=1;
        for(int i=1; i<=n; i++){
            for(int j=1; j<=n; j++){
                if(A[i][j]==1 && B[i][j]==0){
                    flag2=0;
                }
            }
        }
        if(flag2==1){
            flag=1;
            break;
        }
        //rotate A
        for(int i=1; i<=n; i++){
            for(int j=1; j<=n; j++){
                temp[i][j]=A[n+1-j][i];
            }
        }
        for(int i=1; i<=n; i++){
            for(int j=1; j<=n; j++){
                A[i][j]=temp[i][j];
            }
        }
    }

    if(flag==1) printf("Yes\n");
    else printf("No\n");

    return 0;
}