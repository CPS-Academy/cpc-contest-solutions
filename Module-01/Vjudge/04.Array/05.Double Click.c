#include<stdio.h>

int main() {

    int n, d;
    scanf("%d%d", & n, & d);

    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", & arr[i]);
    }

    int ans = -1;

    for (int i = 0; i < n - 1; i++) {
        int x1 = arr[i], x2 = arr[i + 1];
        if (x2 - x1 <= d) {
            ans = x2;
            break;
        }
    }

    printf("%d\n", ans);

    return 0;
}