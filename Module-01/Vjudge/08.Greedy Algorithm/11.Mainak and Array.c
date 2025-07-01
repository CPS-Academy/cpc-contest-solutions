#include <stdio.h>

int main() {
    int t;
    scanf("%d", & t);
    while (t--) {
        int n, ans;
        scanf("%d", & n);
        int a[n];
        for (int i = 0; i < n; i++) {
            scanf("%d", & a[i]);
        }
        ans = a[n - 1] - a[0];
        for (int i = 1; i < n; i++) {
            int tmp = a[i - 1] - a[i];
            if (ans < tmp) ans = tmp;
        }
        for (int i = 1; i < n; i++) {
            int tmp = a[i] - a[0];
            if (ans < tmp) ans = tmp;
        }
        for (int i = 0; i < n - 1; i++) {
            int tmp = a[n - 1] - a[i];
            if (ans < tmp) ans = tmp;
        }
        printf("%d\n", ans);
    }
}
