#include<stdio.h>

int main() {

    int a, b, x, y;
    scanf("%d%d%d%d", & a, & b, & x, & y);

    if (2 * a + b > 2 * x + y) {
        printf("Messi\n");
    } else if (2 * a + b < 2 * x + y) {
        printf("Ronaldo\n");
    } else {
        printf("Equal\n");
    }

    return 0;
}