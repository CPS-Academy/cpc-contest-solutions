#include<stdio.h>

int main(){

    int n, m;
    scanf("%d%d",&n,&m);

    int A[n][m], B[n][m];

    int counter=1;

    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            A[i][j]=counter;
            counter++;
        }
    }

    counter=1;

    for(int j=0; j<m; j++){
        for(int i=0; i<n; i++){
            B[i][j]=counter;
            counter++;
        }
    }

    int ans=0;

    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            if(A[i][j]==B[i][j]){
                ans++;
            }
        }
    }

    printf("%d\n",ans);

    return 0;
}