#include <stdio.h>

int main() {
    int t;
    scanf("%d", & t);
    while (t--) {
        int n, m, i, j;
        scanf("%d%d", & n, & m);
        if (n == 1 & m == 1) {
            int x;
            scanf("%d", & x);
            printf("-1\n");
            continue;
        }
        for (i = 0; i < n; i++) {
            for (j = 0; j < m; j++) {
                int x;
                scanf("%d", & x);
                x++;
                if (x > n * m) x = 1;
                printf("%d ", x);
            }
            printf("\n");
        }
    }
}
