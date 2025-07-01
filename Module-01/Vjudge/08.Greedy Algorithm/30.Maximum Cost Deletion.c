#include <stdio.h>

int main() {
    int t;
    scanf("%d", & t);
    char s[105];
    while (t--) {
        int n, a, b;
        scanf("%d%d%d", & n, & a, & b);
        scanf("%s", s);
        int ans;
        if (b >= 0) {
            ans = (a + b) * n;
        } else {
            int block = 1, i;
            for (i = 1; i < n; i++) {
                if (s[i] != s[i - 1]) block++;
            }
            int op = (block / 2) + 1;
            ans = a * n + op * b;
        }
        printf("%d\n", ans);
    }
}
