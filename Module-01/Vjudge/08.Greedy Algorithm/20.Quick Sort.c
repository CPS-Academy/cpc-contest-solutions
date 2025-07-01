#include <stdio.h>

int main() {
    int t;
    scanf("%d", & t);
    while (t--) {
        int n, k, tmp = 0, i;
        scanf("%d%d", & n, & k);
        int a[n];
        for (i = 0; i < n; i++) {
            scanf("%d", & a[i]);
            if (a[i] == tmp + 1) tmp++;
        }
        tmp = n - tmp;
        int ans = (tmp + k - 1) / k;
        printf("%d\n", ans);
    }
}
