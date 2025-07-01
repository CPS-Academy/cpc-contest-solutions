#include<stdio.h>

int main() {

    int n;
    scanf("%d", & n);

    if (n < 1000) {
        printf("%d\n", n);
    } else if (n < 10000) {
        printf("%d\n", (n / 10) * 10);
    } else if (n < 100000) {
        printf("%d\n", (n / 100) * 100);
    } else if (n < 1000000) {
        printf("%d\n", (n / 1000) * 1000);
    } else if (n < 10000000) {
        printf("%d\n", (n / 10000) * 10000);
    } else if (n < 100000000) {
        printf("%d\n", (n / 100000) * 100000);
    } else {
        printf("%d\n", (n / 1000000) * 1000000);
    }

    return 0;
}