#include<stdio.h>

int main() {

    int n;
    scanf("%d", & n);

    int arr[4 * n - 1];
    for (int i = 0; i < 4 * n - 1; i++) {
        scanf("%d", & arr[i]);
    }

    int F[n + 1];
    for (int i = 1; i <= n; i++) {
        F[i] = 0;
    }

    for (int i = 0; i < 4 * n - 1; i++) {
        F[arr[i]]++;
    }

    int ans;

    for (int i = 1; i <= n; i++) {
        if (F[i] == 3) {
            ans = i;
            break;
        }
    }

    printf("%d\n", ans);

    return 0;
}