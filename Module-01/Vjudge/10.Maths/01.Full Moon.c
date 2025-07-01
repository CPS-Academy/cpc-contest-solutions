#include<stdio.h>

int main() {
    int n, m, k;
    scanf("%d%d%d", & n, & m, & k);
    int ans;
    if (n < m) ans = 0;
    else {
        ans = 1 + (n - m) / k;
    }
    printf("%d\n", ans);
}
