#include<stdio.h>

int main() {

    int n;
    scanf("%d", & n);

    for (int i = 1; i <= n; i++) {
        int arr[7];
        for (int j = 0; j < 7; j++) {
            scanf("%d", & arr[j]);
        }

        int ans = 0;
        for (int j = 0; j < 7; j++) {
            ans += arr[j];
        }

        printf("%d ", ans);
    }
    printf("\n");

    return 0;
}