#include <stdio.h>

int main() {
    int t;
    scanf("%d", & t);
    while (t--) {
        int n;
        scanf("%d", & n);
        int x = n / 5, y = n % 5;
        for (int i = 0; i < x; i++) {
            printf("a");
        }
        if (y) {
            printf("a");
            y--;
        }
        for (int i = 0; i < x; i++) {
            printf("e");
        }
        if (y) {
            printf("e");
            y--;
        }
        for (int i = 0; i < x; i++) {
            printf("i");
        }
        if (y) {
            printf("i");
            y--;
        }
        for (int i = 0; i < x; i++) {
            printf("o");
        }
        if (y) {
            printf("o");
            y--;
        }
        for (int i = 0; i < x; i++) {
            printf("u");
        }
        if (y) {
            printf("u");
            y--;
        }
        printf("\n");
    }
}
