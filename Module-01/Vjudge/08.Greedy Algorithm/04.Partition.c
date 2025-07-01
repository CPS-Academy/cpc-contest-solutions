#include <stdio.h>

int main() {
    int n, i, ans = 0;
    scanf("%d", & n);
    for (i = 0; i < n; i++) {
        int x;
        scanf("%d", & x);
        if (x < 0) ans += -x;
        else ans += x;
    }
    printf("%d\n", ans);
}
