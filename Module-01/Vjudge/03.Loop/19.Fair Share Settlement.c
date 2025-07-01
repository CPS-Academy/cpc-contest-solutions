#include <stdio.h>

int main(){
    int t;
    scanf("%d", &t);

    while(t--){
        int n, k;
        scanf("%d %d", &n, &k);

        int x = n/(k+1);
        int s = x*k;
        int p = n - s;

        printf("%d\n", p);
    }

    return 0;
}