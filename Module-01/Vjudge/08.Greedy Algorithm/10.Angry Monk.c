#include <stdio.h>

int main() {
    int t;
    scanf("%d", & t);
    while (t--) {
        int n, k, mx = 0, ans = 0, l;
        scanf("%d%d", & n, & k);
        int a[k];
        for (int i = 0; i < k; i++) {
            scanf("%d", & a[i]);
            if (mx < a[i]) mx = a[i];
            ans += a[i] * 2 - 1;
        }
        ans -= mx * 2 - 1;
        printf("%d\n", ans);

    }
}
