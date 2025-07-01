#include<stdio.h>

int main() {
    int t;
    scanf("%d", & t);
    while (t--) {
        int n;
        scanf("%d", & n);
        int a[n], b[n];
        long long mna = 1e9, suma = 0, mnb = 1e9, sumb = 0;
        for (int i = 0; i < n; i++) {
            scanf("%d", & a[i]);
            if (mna > a[i]) mna = a[i];
            suma += a[i];
        }
        for (int i = 0; i < n; i++) {
            scanf("%d", & b[i]);
            if (mnb > b[i]) mnb = b[i];
            sumb += b[i];
        }
        long long ans1 = suma + mnb * n, ans2 = sumb + mna * n;
        if (ans1 > ans2) ans1 = ans2;
        printf("%lld\n", ans1);
    }
}
