#include <stdio.h>

int main() {
    int t;
    scanf("%d", & t);
    while (t--) {
        int n, i;
        scanf("%d", & n);
        int a[n];
        for (i = 0; i < n; i++) {
            scanf("%d", & a[i]);
        }
        int x = 0;
        for (i = 0; i < n; i++) {
            x++;
            if (x == a[i]) x++;
        }
        printf("%d\n", x);
    }
}
