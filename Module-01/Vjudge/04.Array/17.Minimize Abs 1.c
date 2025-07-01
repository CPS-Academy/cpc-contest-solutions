#include<stdio.h>

int main() {

    int n, l, r;
    scanf("%d%d%d", & n, & l, & r);

    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", & arr[i]);
    }

    for (int i = 0; i < n; i++) {
        if (arr[i] < l) {
            printf("%d ", l);
        } else if (l <= arr[i] && arr[i] <= r) {
            printf("%d ", arr[i]);
        } else {
            printf("%d ", r);
        }
    }
    printf("\n");

    return 0;
}