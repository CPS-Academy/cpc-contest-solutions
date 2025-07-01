#include<stdio.h>

int main(){

    int n, m;
    scanf("%d%d",&n,&m);

    int arr[m][n];

    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            scanf("%d",&arr[i][j]);
        }
    }

    int mark[n+1][n+1];

    for(int i=1; i<=n; i++){
        for(int j=1; j<=n; j++){
            mark[i][j]=0;
        }
    }

    for(int i=0; i<m; i++){
        for(int j=0; j<n-1; j++){
            mark[arr[i][j]][arr[i][j+1]]=1;
            mark[arr[i][j+1]][arr[i][j]]=1;
        }
    }

    int ans=0;
    for(int i=1; i<=n; i++){
        for(int j=1; j<=n; j++){
            if(i==j) continue;
            if(mark[i][j]==0) ans++;
        }
    }

    ans/=2;
    printf("%d\n",ans);

    return 0;
}