#include <stdio.h>

int main(){
    int t;
    scanf("%d", &t);

    while(t--){
        int n, m;
        scanf("%d %d", &n, &m);

        if(m >= n){
            printf("0\n");
        }
        else {
            int ans = n - m;
            printf("%d\n", ans);
        }
    }

    return 0;
}