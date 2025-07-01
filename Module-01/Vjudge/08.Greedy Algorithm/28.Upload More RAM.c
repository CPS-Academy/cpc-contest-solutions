#include<stdio.h>

int main() {
    int t;
    scanf("%d", & t);
    while (t--) {
        int n, k;
        scanf("%d%d", & n, & k);
        int ans = 1 + (n - 1) * k;
        printf("%d\n", ans);
    }
}
