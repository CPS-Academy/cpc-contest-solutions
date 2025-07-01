#include <stdio.h>

int main() {
    int t;
    scanf("%d", & t);
    while (t--) {
        int n;
        scanf("%d", & n);
        while (n) {
            if (n % 2) {
                printf("7");
                n -= 3;
            } else {
                printf("1");
                n -= 2;
            }
        }
        printf("\n");
    }
}
