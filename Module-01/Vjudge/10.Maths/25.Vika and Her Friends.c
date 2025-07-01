#include<stdio.h>

int main() {
    int t;
    scanf("%d", & t);
    while (t--) {
        int n, m, k;
        scanf("%d%d%d", & n, & m, & k);
        int x, y;
        scanf("%d%d", & x, & y);
        int pr = (x + y) % 2, ok = 0;
        for (int i = 1; i <= k; i++) {
            scanf("%d%d", & x, & y);
            if ((x + y) % 2 == pr) {
                ok = 1;
            }
        }
        if (!ok) printf("YES\n");
        else printf("NO\n");
    }
}
