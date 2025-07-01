#include<stdio.h>

int main() {
    int a, b;
    scanf("%d%d", & a, & b);
    int ans = b - a + 1;
    if (ans < 0) ans = 0;
    printf("%d\n", ans);
}
