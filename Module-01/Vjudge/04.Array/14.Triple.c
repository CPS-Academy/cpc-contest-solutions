#include<stdio.h>

int main() {

    int t;
    scanf("%d", & t);

    while (t--) {
        int n;
        scanf("%d", & n);

        int arr[n];
        for (int i = 0; i < n; i++) {
            scanf("%d", & arr[i]);
        }

        int F[n + 1];

        for (int i = 1; i <= n; i++) {
            F[i] = 0;
        }

        for (int i = 0; i < n; i++) {
            F[arr[i]]++;
        }

        int ans = -1;

        for (int i = 1; i <= n; i++) {
            if (F[i] >= 3) {
                ans = i;
                break;
            }
        }

        printf("%d\n", ans);
    }

    return 0;
}