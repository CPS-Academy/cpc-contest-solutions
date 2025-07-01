#include <stdio.h>

int main() {
    int t;
    scanf("%d", & t);
    while (t--) {
        int n;
        scanf("%d", & n);
        if (n == 1) {
            printf("1\n");
        } else if (n % 2 == 1) {
            printf("-1\n");
        } else {
            for (int i = 1; i <= n; i += 2) {
                printf("%d %d ", i + 1, i);
            }
            printf("\n");
        }
    }
}
