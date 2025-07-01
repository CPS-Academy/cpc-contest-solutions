#include <stdio.h>

int main(){
    int t;
    scanf("%d", &t);

    while(t--){
        int n, x;
        scanf("%d %d", &n, &x);

        int u = 2*n - x;

        if(u >= x){
            printf("0\n");
        }
        else {
            int ans = x-u;
            printf("%d\n", ans);
        }
    }

    return 0;
}