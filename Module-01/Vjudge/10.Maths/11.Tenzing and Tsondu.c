#include<stdio.h>

int main() {
    int t;
    scanf("%d", & t);
    while (t--) {
        int n, m;
        scanf("%d%d", & n, & m);
        long long a[n], b[m], suma = 0, sumb = 0;
        for (int i = 0; i < n; i++) {
            scanf("%lld", & a[i]);
            suma += a[i];
        }
        for (int i = 0; i < m; i++) {
            scanf("%lld", & b[i]);
            sumb += b[i];
        }
        if (suma > sumb) printf("Tsondu\n");
        else if (sumb > suma) printf("Tenzing\n");
        else printf("Draw\n");
    }
}
