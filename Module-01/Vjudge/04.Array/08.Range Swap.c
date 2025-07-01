#include<stdio.h>

int main() {

    int n, p, q, r, s;
    scanf("%d%d%d%d%d", & n, & p, & q, & r, & s);

    int arr[n + 1];
    for (int i = 1; i <= n; i++) {
        scanf("%d", & arr[i]);
    }

    for (int i = 1; i <= p - 1; i++) {
        printf("%d ", arr[i]);
    }

    for (int i = r; i <= s; i++) {
        printf("%d ", arr[i]);
    }

    for (int i = q + 1; i <= r - 1; i++) {
        printf("%d ", arr[i]);
    }

    for (int i = p; i <= q; i++) {
        printf("%d ", arr[i]);
    }

    for (int i = s + 1; i <= n; i++) {
        printf("%d ", arr[i]);
    }

    printf("\n");

    return 0;
}