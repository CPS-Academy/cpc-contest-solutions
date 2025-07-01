#include<stdio.h>

int main() {
    int t;
    scanf("%d", & t);
    while (t--) {
        int n, cnt = 0;
        scanf("%d", & n);
        for (int i = 0; i < n; i++) {
            int x;
            scanf("%d", & x);
            if (x % 2 == 1) {
                cnt++;
            }
        }
        if (cnt % 2 == 0) {
            printf("YES\n");
        } else {
            printf("NO\n");
        }
    }
}
