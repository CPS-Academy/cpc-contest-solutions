#include<stdio.h>

int sum(int a, int b, int c) {
    return a + b + c;
}
int min(int a, int b, int c) {
    if (a < b && a < c) return a;
    if (b < c) return b;
    return c;
}
int main() {
    int a, b, c;
    scanf("%d%d%d", & a, & b, & c);
    printf("%d\n", sum(a, b, c) - min(a, b, c));
}
