#include<stdio.h>

int main() {
    int t;
    scanf("%d", & t);
    while (t--) {
        int n, i, sum = 0;
        scanf("%d", & n);
        for (i = 1; i < n; i++) {
            int x;
            scanf("%d", & x);
            sum += x;
        }
        printf("%d\n", -sum);
    }
}
