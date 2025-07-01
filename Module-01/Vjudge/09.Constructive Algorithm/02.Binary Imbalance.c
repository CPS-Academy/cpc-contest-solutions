#include <stdio.h>

int main() {
    int t;
    scanf("%d", & t);
    while (t--) {
        int n, ok = 0;
        scanf("%d", & n);
        char s[105];
        scanf("%s", s);
        for (int i = 0; i < n; i++) {
            if (s[i] == '0') ok = 1;
        }
        if (ok) printf("YES\n");
        else printf("NO\n");
    }
}
