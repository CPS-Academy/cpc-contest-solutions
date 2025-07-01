#include<stdio.h>

int main() {
    int t;
    scanf("%d", & t);
    while (t--) {
        int n, k, x;
        scanf("%d%d%d", & n, & k, & x);
        if (k > n || x < k - 1) {
            printf("-1\n");
        } else {
            int ans = k * (k - 1) / 2;
            if (k == x) x--;
            ans += x * (n - k);
            printf("%d\n", ans);
        }
    }
}
