#include <stdio.h>

int main() {
    int t;
    scanf("%d", & t);
    while (t--) {
        int c[3], a[5], i;
        for (i = 0; i < 3; i++) {
            scanf("%d", & c[i]);
        }
        for (i = 0; i < 5; i++) {
            scanf("%d", & a[i]);
        }
        if (a[0] > c[0] || a[1] > c[1]) {
            printf("NO\n");
            continue;
        }
        c[0] -= a[0];
        c[1] -= a[1];
        if (c[0] < a[3]) a[3] -= c[0];
        else a[3] = 0;
        if (c[1] < a[4]) a[4] -= c[1];
        else a[4] = 0;
        if (c[2] < a[2] + a[3] + a[4]) printf("NO\n");
        else printf("YES\n");
    }
}
