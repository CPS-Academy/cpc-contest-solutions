#include<stdio.h>

int main() {
    int t;
    scanf("%d", & t);
    while (t--) {
        int a[3], i, mn = 1000000000;
        for (i = 0; i < 3; i++) {
            scanf("%d", & a[i]);
            if (mn > a[i]) mn = a[i];
        }
        int f = 0;
        for (i = 0; i < 3; i++) {
            if (a[i] % mn) {
                f = 1;
            }
        }
        if (f == 1) {
            printf("NO\n");
            continue;
        }
        int c = 0;
        for (i = 0; i < 3; i++) {
            c += a[i] / mn - 1;
        }
        if (c > 3) printf("NO\n");
        else printf("YES\n");
    }
}
