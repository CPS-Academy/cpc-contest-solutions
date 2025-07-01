#include<stdio.h>

int main() {
    int t;
    scanf("%d", & t);
    while (t--) {
        int n, cnt = 0;
        scanf("%d", & n);
        for (int i = 1; i <= n; i++) {
            int x;
            scanf("%d", & x);
            if (x == i) cnt++;
        }
        printf("%d\n", (cnt + 1) / 2);
    }
}
