#include <stdio.h>
#include <limits.h>

int main(){
    int t;
    scanf("%d", &t);

    int tc = 1;

    while(t--){
        int a, b;
        scanf("%d %d", &a, &b);

        int sum = a+b;

        printf("Case %d: %d\n", tc, sum);
        tc++;
    }

    return 0;
}