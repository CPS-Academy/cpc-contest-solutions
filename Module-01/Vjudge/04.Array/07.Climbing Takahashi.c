#include<stdio.h>

int main() {

    int n;
    scanf("%d", & n);

    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", & arr[i]);
    }

    int ans = arr[0];

    for (int i = 1; i < n; i++) {
        if (arr[i] > arr[i - 1]) {
            ans = arr[i];
        } else {
            break;
        }
    }

    printf("%d\n", ans);

    return 0;
}