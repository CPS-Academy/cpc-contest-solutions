#include <stdio.h>

int main() {
    int t;
    scanf("%d", & t);
    while (t--) {
        int n, k, i;
        scanf("%d%d", & n, & k);
        for (i = n - k; i >= 1; i--) {
            printf("%d ", i);
        }
        for (i = n - k + 1; i <= n; i++) {
            printf("%d ", i);
        }
        printf("\n");
    }
}
