#include<stdio.h>

int main() {

    int a, b;
    scanf("%d%d", & a, & b);

    int res = a + b + a * b;

    if (res == 111) {
        printf("Yes\n");
    } else {
        printf("No\n");
    }

    return 0;
}