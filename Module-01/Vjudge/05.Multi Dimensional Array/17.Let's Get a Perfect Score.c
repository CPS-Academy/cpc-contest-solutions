#include<stdio.h>

int main(){

    int n, m;
    scanf("%d%d",&n,&m);

    char arr[n][m];
    char temp;

    scanf("%c",&temp);

    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            scanf("%c",&arr[i][j]);
        }
        scanf("%c",&temp);
    }

    int ans=0;

    for(int i=0; i<n; i++){
        for(int i2=i+1; i2<n; i2++){
            int flag=1;
            for(int j=0; j<m; j++){
                if(arr[i][j]=='x' && arr[i2][j]=='x'){
                    flag=0;
                    break;
                }
            }
            if(flag==1) ans++;
        }
    }

    printf("%d\n",ans);

    return 0;
}