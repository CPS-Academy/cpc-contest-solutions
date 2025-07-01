#include<bits/stdc++.h>

using namespace std;
int main() {
    int t;
    scanf("%d", & t);
    while (t--) {
        int n, k;
        scanf("%d%d", & n, & k);
        int a[n], b[n];
        for (int i = 0; i < n; i++) {
            scanf("%d", & a[i]);
        }
        for (int i = 0; i < n; i++) {
            scanf("%d", & b[i]);
        }
        sort(a, a + n);
        sort(b, b + n);
        reverse(b, b + n);
        int ans = 0;
        for (int i = 0; i < k; i++) {
            ans += max(a[i], b[i]);
        }
        for (int i = k; i < n; i++) {
            ans += a[i];
        }
        printf("%d\n", ans);
    }
}
