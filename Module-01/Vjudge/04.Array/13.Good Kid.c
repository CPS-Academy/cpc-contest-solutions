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

        int ans = 0;
        for (int i = 0; i < n; i++) {
            arr[i]++;
            int m = 1;
            for (int j = 0; j < n; j++) {
                m *= arr[j];
            }
            if (m > ans) {
                ans = m;
            }
            arr[i]--;
        }
        printf("%d\n", ans);
    }

    return 0;
}