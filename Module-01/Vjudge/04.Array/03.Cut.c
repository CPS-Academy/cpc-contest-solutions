#include<stdio.h>

int main() {

    int n, k;
    scanf("%d%d", & n, & k);

    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", & arr[i]);
    }

    int ind = n - k;
    for (int i = ind; i < n; i++) {
        printf("%d ", arr[i]);
    }

    for (int i = 0; i < ind; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}