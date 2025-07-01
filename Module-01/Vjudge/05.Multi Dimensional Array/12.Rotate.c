#include<stdio.h>

int main(){

    int n;
    scanf("%d",&n);

    char A[n][n], NA[n][n];
    char temp;

    scanf("%c",&temp);

    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            scanf("%c",&A[i][j]);
        }
        scanf("%c",&temp);
    }

    for(int j=0; j<=n-2; j++){
        NA[0][j+1]=A[0][j];
    }

    for(int i=0; i<=n-2; i++){
        NA[i+1][n-1]=A[i][n-1];
    }

    for(int j=1; j<=n-1; j++){
        NA[n-1][j-1]=A[n-1][j];
    }

    for(int i=1; i<=n-1; i++){
        NA[i-1][0]=A[i][0];
    }

    for(int i=1; i<n-1; i++){
        for(int j=1; j<n-1; j++){
            NA[i][j]=A[i][j];
        }
    }

    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            printf("%c",NA[i][j]);
        }
        printf("\n");
    }

    return 0;
}