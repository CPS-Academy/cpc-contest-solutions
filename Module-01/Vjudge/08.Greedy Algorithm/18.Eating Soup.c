#include <stdio.h>

int main() {
    int n, m;
    scanf("%d%d", & n, & m);
    int ans = m;
    if (ans < 1) ans = 1;
    if (ans > n - m) ans = n - m;
    printf("%d\n", ans);
}
