#include <stdio.h>

int main() {
    int t;
    scanf("%d", & t);
    while (t--) {
        int n, i, cnt0 = 0, cntneg = 0;
        scanf("%d", & n);
        int a[n];
        for (i = 0; i < n; i++) {
            scanf("%d", & a[i]);
            if (a[i] == 0) cnt0++;
            else if (a[i] < 0) {
                cntneg++;
            }
        }
        if (cnt0) {
            printf("0\n");
        } else if (cntneg % 2) {
            printf("0\n");
        } else {
            printf("1\n");
            printf("1 0\n");
        }
    }
}
