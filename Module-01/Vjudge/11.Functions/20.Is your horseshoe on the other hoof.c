#include<stdio.h>

int a[4];
int check(int i) {
    for (int j = 0; j < i; j++) {
        if (a[i] == a[j]) return 0;
    }
    return 1;
}
int main() {
    scanf("%d%d%d%d", & a[0], & a[1], & a[2], & a[3]);
    int d = check(0) + check(1) + check(2) + check(3);
    printf("%d\n", 4 - d);
}
