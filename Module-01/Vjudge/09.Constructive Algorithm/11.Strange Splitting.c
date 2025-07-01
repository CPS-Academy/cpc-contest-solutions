#include <stdio.h>

int main() {
    int t;
    scanf("%d", & t);
    while (t--) {
        int n;
        scanf("%d", & n);
        int a[n];
        for (int i = 0; i < n; i++) {
            scanf("%d", & a[i]);
        }
        if (a[0] == a[n - 1]) {
            printf("NO\n");
        } else {
            printf("YES\n");
            printf("RB");
            for (int i = 2; i < n; i++) {
                printf("R");
            }
            printf("\n");
        }
    }
}
