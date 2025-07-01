#include <stdio.h>

int main() {
    int t;
    scanf("%d", & t);
    char s[15];
    while (t--) {
        int n;
        scanf("%d", & n);
        scanf("%s", s);
        int start = 0, i;
        for (i = 0; i < n; i++) {
            if (s[i] == 'B') {
                start = i;
                break;
            }
        }
        int ed = 0;
        for (i = n - 1; i >= 0; i--) {
            if (s[i] == 'B') {
                ed = i;
                break;
            }
        }
        printf("%d\n", ed - start + 1);
    }
}
