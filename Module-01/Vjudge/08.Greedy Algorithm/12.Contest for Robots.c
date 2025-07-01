#include <stdio.h>

int main() {
    int n, ans;
    scanf("%d", & n);
    int r[n], b[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", & r[i]);
    }
    for (int i = 0; i < n; i++) {
        scanf("%d", & b[i]);
    }
    int cntb = 0, cntr = 0;
    for (int i = 0; i < n; i++) {
        if (r[i] == b[i]) continue;
        cntr += r[i];
        cntb += b[i];
    }
    cntb++;
    if (cntr == 0) {
        ans = -1;
    } else {
        ans = (cntb + cntr - 1) / cntr;
    }
    printf("%d\n", ans);
}
