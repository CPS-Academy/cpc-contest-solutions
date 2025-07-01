#include <stdio.h>

int main(){
    int t;
    scanf("%d", &t);

    while(t--){
        int n, x, d;
        scanf("%d %d %d", &n, &x, &d);

        int y = 5*x;

        int s = n/y;

        int ans = s + d;

        printf("%d\n", ans);
    }

    return 0;
}