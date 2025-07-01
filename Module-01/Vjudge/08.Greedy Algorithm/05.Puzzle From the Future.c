#include <stdio.h>

int main() {
    int t;
    scanf("%d", & t);
    char a[100010], b[100010];
    while (t--) {
        int n, i, t = -1;
        scanf("%d", & n);
        scanf("%s", b);
        for (i = 0; i < n; i++) {
            if (b[i] - '0' + 1 == t) {
                a[i] = '0';
            } else {
                a[i] = '1';
            }
            t = b[i] - '0' + a[i] - '0';
        }
        for (i = 0; i < n; i++) {
            printf("%c", a[i]);
        }
        printf("\n");
    }
}
