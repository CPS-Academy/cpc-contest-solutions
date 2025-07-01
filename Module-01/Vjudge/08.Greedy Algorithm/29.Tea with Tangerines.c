#include <stdio.h>

int main() {
    int t;
    scanf("%d", & t);
    while (t--) {
        int n;
        scanf("%d", & n);
        int a[n], i, ans = 0;
        for (i = 0; i < n; i++) {
            scanf("%d", & a[i]);
        }
        int x = a[0] * 2 - 1;
        for (i = 0; i < n; i++) {
            ans += (a[i] + x - 1) / x - 1;
        }
        printf("%d\n", ans);
    }
}
