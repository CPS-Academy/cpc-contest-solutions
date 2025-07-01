#include <stdio.h>

int main() {
    int n;
    scanf("%d", & n);
    int ai, pi, ans = 0, i, mn = 101;
    for (i = 0; i < n; i++) {
        scanf("%d%d", & ai, & pi);
        if (mn > pi) mn = pi;
        ans += mn * ai;
    }
    printf("%d\n", ans);
}
