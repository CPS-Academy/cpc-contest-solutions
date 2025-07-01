#include <stdio.h>

int main() {
    int t;
    scanf("%d", & t);
    char s[200010];
    while (t--) {
        int n, k, i, ans = 0;
        scanf("%d %d", & n, & k);
        scanf("%s", s);
        for (i = 0; i < n;) {
            if (s[i] == 'B') {
                ans++;
                i += k;
            } else {
                i++;
            }
        }
        printf("%d\n", ans);
    }
}
