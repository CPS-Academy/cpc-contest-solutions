#include <stdio.h>

int main() {
    int t;
    scanf("%d", & t);
    while (t--) {
        int n;
        scanf("%d", & n);
        printf("1\n");
        for (int i = 2; i <= n; i++) {
            printf("1 ");
            for (int j = 0; j < i - 2; j++) {
                printf("0 ");
            }
            printf("1\n");
        }
    }
}
