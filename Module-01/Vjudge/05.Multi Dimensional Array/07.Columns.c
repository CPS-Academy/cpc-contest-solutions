#include<stdio.h>

int main(){

    int x, n;
    scanf("%d%d",&x,&n);

    int arr[n][n];

    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            scanf("%d",&arr[i][j]);
        }
    }

    for(int j=0; j<n; j++){
        int flag=0;
        for(int i=0; i<n; i++){
            if(arr[i][j]==x){
                flag=1;
            }
        }
        if(flag==1) printf("YES\n");
        else printf("NO\n");
    }

    return 0;
}