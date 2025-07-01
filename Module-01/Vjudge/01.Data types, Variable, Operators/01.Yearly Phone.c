#include <stdio.h>


int main() {
    int x;
    scanf("%d", &x);
    int lastTwoDigits = x % 100;
    printf("K%02d\n", lastTwoDigits);
    return 0;
}
