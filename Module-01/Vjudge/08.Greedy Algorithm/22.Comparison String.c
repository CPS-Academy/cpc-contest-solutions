#include <stdio.h>

int main() {
    int t;
    scanf("%d", & t);
    char s[105];
    while (t--) {
        int n;
        scanf("%d", & n);
        scanf("%s", s);
        int i, ans = 1, cur = 1;
        for (i = 0; i < n - 1; i++) {
            if (s[i] == s[i + 1]) cur++;
            else cur = 1;
            if (ans < cur) ans = cur;
        }
        printf("%d\n", ans + 1);
    }
}
