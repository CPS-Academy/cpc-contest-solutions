#include<stdio.h>

int main() {

    int n;
    scanf("%d", & n);

    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", & arr[i]);
    }

    int F[101];
    for (int i = 1; i <= 100; i++) {
        F[i] = 0;
    }

    for (int i = 0; i < n; i++) {
        F[arr[i]]++;
    }

    int mx = 0;
    for (int i = 1; i <= 100; i++) {
        if (F[i] > mx) {
            mx = F[i];
        }
    }

    printf("%d\n", n - mx);

    return 0;
}