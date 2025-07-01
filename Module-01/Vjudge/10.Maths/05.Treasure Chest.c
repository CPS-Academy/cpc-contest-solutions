#include<stdio.h>

int main() {
    int t;
    scanf("%d", & t);
    while (t--) {
        int x, y, k;
        scanf("%d%d%d", & x, & y, & k);
        if (y < x) {
            printf("%d\n", x);
        } else if (x + k >= y) {
            printf("%d\n", y);
        } else {
            printf("%d\n", y + y - (x + k));
        }
    }
}
