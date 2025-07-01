#include<stdio.h>

int main() {
    int n;
    scanf("%d", & n);
    int mn = 100000;
    for (int i = 0; i < n; i++) {
        int x;
        scanf("%d", & x);
        if (x < 0) x = -x;
        if (x < mn) mn = x;
    }
    printf("%d\n", mn);
}
