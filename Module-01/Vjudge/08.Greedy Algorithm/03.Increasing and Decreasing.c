#include <stdio.h>

int main() {
    int t;
    scanf("%d", & t);
    while (t--) {
        int x, y, n;
        scanf("%d%d%d", & x, & y, & n);
        int a[n];
        a[n - 1] = y;
        int b = 1;
        for (int i = n - 2; i >= 0; i--) {
            a[i] = a[i + 1] - b;
            b++;
        }
        if (a[0] >= x) {
            a[0] = x;
            for (int i = 0; i < n; i++) {
                printf("%d ", a[i]);
            }
            printf("\n");
        } else {
            printf("-1\n");
        }
    }
}
