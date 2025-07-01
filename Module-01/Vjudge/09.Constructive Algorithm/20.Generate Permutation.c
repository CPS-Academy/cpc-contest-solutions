#include<stdio.h>

int main() {
    int t;
    scanf("%d", & t);
    while (t--) {
        int n;
        scanf("%d", & n);
        if (n % 2 == 0) {
            printf("-1\n");
            continue;
        }
        for (int i = n; i > 0; i -= 2) {
            printf("%d ", i);
        }
        for (int i = 2; i < n; i += 2) {
            printf("%d ", i);
        }
        printf("\n");
    }
}
