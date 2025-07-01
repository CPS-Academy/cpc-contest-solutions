#include <stdio.h>

int main() {
    int t;
    scanf("%d", & t);
    while (t--) {
        int n, a, b, i;
        scanf("%d%d%d", & n, & a, & b);
        int p[n];
        p[0] = a;
        p[n - 1] = b;
        int value = n;
        for (i = 1; i < n - 1;) {
            if (value == a || value == b) {
                value--;
                continue;
            }
            p[i] = value;
            value--;
            i++;
        }
        int ok = 1, mn = a, mx = b;
        for (i = 0; i < n / 2; i++) {
            if (mn > p[i]) mn = p[i];
        }
        for (i = n / 2; i < n; i++) {
            if (mx < p[i]) mx = p[i];
        }
        if (mx != b || mn != a) {
            printf("-1\n");
            continue;
        }
        for (i = 0; i < n; i++) {
            printf("%d ", p[i]);
        }
        printf("\n");
    }
}
