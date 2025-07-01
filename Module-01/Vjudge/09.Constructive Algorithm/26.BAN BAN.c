#include <stdio.h>

int main() {
    int t;
    scanf("%d", & t);
    while (t--) {
        int n;
        scanf("%d", & n);
        printf("%d\n", (n + 1) / 2);
        int l = 1, r = n * 3;
        while (l < r) {
            printf("%d %d\n", l, r);
            l += 3;
            r -= 3;
        }
    }
}
