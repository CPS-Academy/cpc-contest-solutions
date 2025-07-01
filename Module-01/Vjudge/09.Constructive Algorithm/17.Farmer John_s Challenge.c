#include <stdio.h>

int main() {
    int t;
    scanf("%d", & t);
    while (t--) {
        int n, k, i;
        scanf("%d%d", & n, & k);
        if (k == 1) {
            for (i = 1; i <= n; i++) {
                printf("%d ", i);
            }
        } else if (k == n) {
            for (i = 0; i < n; i++) {
                printf("1 ");
            }
        } else {
            printf("-1");
        }
        printf("\n");
    }
}
