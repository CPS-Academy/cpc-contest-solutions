#include<stdio.h>

int main() {
    int t;
    scanf("%d", & t);
    while (t--) {
        int n;
        scanf("%d", & n);
        int ok = 1;
        for (int i = 0; i < n; i++) {
            int x;
            scanf("%d", & x);
            if (x < 0) ok = 0;
        }
        if (ok == 0) {
            printf("NO\n");
        } else {
            printf("YES\n");
            printf("101\n");
            for (int i = 0; i <= 100; i++) {
                printf("%d ", i);
            }
            printf("\n");
        }
    }
}
