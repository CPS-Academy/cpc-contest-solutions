#include<stdio.h>

int main() {

    int t;
    scanf("%d", & t);

    for (int T = 0; T < t; T++) {
        int n;
        scanf("%d", & n);

        int arr[n];

        for (int i = 0; i < n; i++) {
            scanf("%d", & arr[i]);
        }

        int ans = 0;
        for (int i = 0; i < n; i++) {
            if (arr[i] % 2 == 1) {
                ans++;
            }
        }

        printf("%d\n", ans);
    }

    return 0;
}