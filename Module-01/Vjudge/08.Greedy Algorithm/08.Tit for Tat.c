#include <stdio.h>

int main() {
    int t;
    scanf("%d", & t);
    while (t--) {
        int n, k;
        scanf("%d%d", & n, & k);
        int a[n];
        for (int i = 0; i < n; i++) {
            scanf("%d", & a[i]);
        }
        while (k--) {
            for (int i = 0; i < n; i++) {
                if (a[i]) {
                    a[i]--;
                    a[n - 1]++;
                    break;
                }
            }
        }
        for (int i = 0; i < n; i++) {
            printf("%d ", a[i]);
        }
        printf("\n");
    }
}
