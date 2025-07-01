#include<stdio.h>

int main() {
    int t;
    scanf("%d", & t);
    while (t--) {
        int n, a, b;
        scanf("%d%d%d", & n, & a, & b);
        if (a * 2 <= b) {
            printf("%d\n", a * n);
        } else {
            printf("%d\n", (n / 2) * b + (n % 2) * a);
        }
    }
}
