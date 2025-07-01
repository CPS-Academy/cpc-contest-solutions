#include <stdio.h>

int main() {
    int t;
    scanf("%d", & t);
    while (t--) {
        int n;
        scanf("%d", & n);
        int b[n];
        for (int i = 0; i < n; i++) {
            scanf("%d", & b[i]);
        }
        int m = 1, a[n * 2];
        a[0] = b[0];
        for (int i = 1, j = 1; i < n; i++, j++) {
            if (b[i] < b[i - 1]) {
                a[j] = b[i];
                j++;
                m++;
            }
            a[j] = b[i];
            m++;
        }
        printf("%d\n", m);
        for (int i = 0; i < m; i++) {
            printf("%d ", a[i]);
        }
        printf("\n");
    }
}
