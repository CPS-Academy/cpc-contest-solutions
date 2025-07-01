#include <stdio.h>
#include <limits.h>

int main(){
    int n, k, m;
    scanf("%d %d %d", &n, &k, &m);

    int s = 0;
    for(int i = 1; i <= n-1; i++){
        int a;
        scanf("%d", &a);
        s += a;
    }

    int remaining = n*m - s;

    if(remaining > k){
        printf("-1\n");
    }
    else {
        if(remaining < 0){
            printf("0\n");
        }
        else {
            printf("%d\n", remaining);
        }
    }

    return 0;
}