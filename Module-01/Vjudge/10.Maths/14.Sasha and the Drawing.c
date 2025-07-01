#include<stdio.h>

int main() {
    int t;
    scanf("%d", & t);
    while (t--) {
        int n, k;
        scanf("%d%d", & n, & k);
        if (k == 4 * n - 2) {
            printf("%d\n", k / 2 + 1);
        } else {
            printf("%d\n", (k + 1) / 2);
        }
    }
}
