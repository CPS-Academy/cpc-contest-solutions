#include<stdio.h>

int main() {
    int t;
    scanf("%d", & t);
    while (t--) {
        int x[4], y[4];
        for (int i = 0; i < 4; i++) {
            scanf("%d%d", & x[i], & y[i]);
        }
        int mn = x[0], i;
        for (i = 1; i < 4; i++) {
            if (x[i] < mn) mn = x[i];
        }
        int mx = x[0];
        for (i = 1; i < 4; i++) {
            if (x[i] > mx) mx = x[i];
        }
        printf("%d\n", (mx - mn) * (mx - mn));
    }
}
