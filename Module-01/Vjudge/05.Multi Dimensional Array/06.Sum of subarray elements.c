#include<stdio.h>

int main(){

    int n, m;
    scanf("%d%d",&n,&m);

    int arr[n+1][m+1];

    for(int i=1; i<=n; i++){
        for(int j=1; j<=m; j++){
            scanf("%d",&arr[i][j]);
        }
    }

    int r1, r2, c1, c2;
    scanf("%d%d%d%d",&r1,&c1,&r2,&c2);

    int ans=0;

    for(int i=r1; i<=r2; i++){
        for(int j=c1; j<=c2; j++){
            ans+=arr[i][j];
        }
    }

    printf("%d\n",ans);


    return 0;
}