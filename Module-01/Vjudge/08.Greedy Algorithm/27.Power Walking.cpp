#include<bits/stdc++.h>

using namespace std;
int main() {
    int t;
    scanf("%d", & t);
    while (t--) {
        int n;
        scanf("%d", & n);
        int a[n], i;
        for (i = 0; i < n; i++) {
            scanf("%d", & a[i]);
        }
        sort(a, a + n);
        int u = 1;
        for (i = 1; i < n; i++) {
            if (a[i] != a[i - 1]) u++;
        }
        for (int k = 1; k <= n; k++) {
            printf("%d ", max(k, u));
        }
        printf("\n");
    }
}
