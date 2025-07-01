#include<stdio.h>

int main() {

    int n;
    scanf("%d", & n);

    int s[n + 1];
    for (int i = 1; i <= n; i++) {
        scanf("%d", & s[i]);
    }

    int a[n + 1];

    a[1] = s[1];

    for (int i = 2; i <= n; i++) {
        a[i] = s[i] - s[i - 1];
    }

    for (int i = 1; i <= n; i++) {
        printf("%d ", a[i]);
    }
    printf("\n");

    return 0;
}