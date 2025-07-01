#include<stdio.h>

int main() {
    int t;
    scanf("%d", & t);
    while (t--) {
        int n, i;
        scanf("%d", & n);
        int a[n];
        for (i = 0; i < n; i++) {
            scanf("%d", & a[i]);
        }
        int mni = 0;
        for (i = 1; i < n; i++) {
            if (a[i] < a[mni]) {
                mni = i;
            }
        }
        a[mni]++;
        int ans = 1;
        for (i = 0; i < n; i++) {
            ans *= a[i];
        }
        printf("%d\n", ans);
    }
}
