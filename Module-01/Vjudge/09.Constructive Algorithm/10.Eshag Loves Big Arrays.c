#include<stdio.h>

int main() {
    int t;
    scanf("%d", & t);
    while (t--) {
        int n;
        scanf("%d", & n);
        int a[n], mn = 100;
        for (int i = 0; i < n; i++) {
            scanf("%d", & a[i]);
            if (mn > a[i]) mn = a[i];
        }
        int ans = 0;
        for (int i = 0; i < n; i++) {
            if (a[i] != mn) ans++;
        }
        printf("%d\n", ans);
    }
}
