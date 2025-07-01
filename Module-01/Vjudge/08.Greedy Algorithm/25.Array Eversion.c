#include <stdio.h>

int main() {
    int t;
    scanf("%d", & t);
    while (t--) {
        int n, i;
        scanf("%d", & n);
        int a[n];
        for (i = 0; i < n; i++) {
            scanf("%d", & a[i]);
        }
        int ans = 0, mx = a[n - 1];
        for (i = n - 2; i >= 0; i--) {
            if (mx < a[i]) {
                mx = a[i];
                ans++;
            }
        }
        printf("%d\n", ans);
    }
}
