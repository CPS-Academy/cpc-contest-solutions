#include<stdio.h>

int main(){

    int n, m;
    scanf("%d%d",&n,&m);

    int arr[n][m];

    int counter=1;

    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            arr[i][j]=counter;
            counter++;
        }
    }

    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }

    return 0;
}