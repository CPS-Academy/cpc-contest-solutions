#include <stdio.h>

int main() {
    int t;
    scanf("%d", & t);
    while (t--) {
        int n;
        scanf("%d", & n);
        int a[n + 1], i, sum = 0;
        for (i = 0; i < n; i++) {
            scanf("%d", & a[i]);
            sum += a[i];
        }
        int x = sum / n, int_ans = 1;
        for (i = 0; i < n; i++) {
            if (a[i] < x) {
                int_ans = 0;
                break;
            }
            int y = a[i] - x;
            if (y) {
                a[i + 1] += y;
            }
        }
        if (int_ans) {
            printf("YES\n");
        } else {
            printf("NO\n");
        }
    }
}
