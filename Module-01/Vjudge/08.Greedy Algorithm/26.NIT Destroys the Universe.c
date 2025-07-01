#include <stdio.h>

int main() {
    int t;
    scanf("%d", & t);
    while (t--) {
        int n, i;
        scanf("%d", & n);
        int a[n + 1];
        for (i = 1; i <= n; i++) {
            scanf("%d", & a[i]);
        }
        a[0] = 0;
        int ans = 0;
        for (i = 1; i <= n; i++) {
            if (a[i - 1] == 0 && a[i] != 0) ans++;
        }
        if (ans > 2) ans = 2;
        printf("%d\n", ans);
    }
}
