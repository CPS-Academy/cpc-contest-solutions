#include <stdio.h>

int main() {
    int t;
    scanf("%d", & t);
    char s[200005];
    while (t--) {
        int n, i, j;
        scanf("%d", & n);
        scanf("%s", s);
        for (i = 0; i < n; i++) {
            if (s[i] == 'A') break;
        }
        for (j = n - 1; j >= 0; j--) {
            if (s[j] == 'B') break;
        }
        int ans;
        if (i > j) ans = 0;
        else ans = j - i;
        printf("%d\n", ans);
    }
}
