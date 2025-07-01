#include<bits/stdc++.h>

using namespace std;
int main() {
    int n, m;
    scanf("%d%d", & n, & m);
    int a[n], i;
    for (i = 0; i < n; i++) {
        scanf("%d", & a[i]);
    }
    sort(a, a + n);
    int ans = 0;
    for (i = 0; i < m; i++) {
        if (a[i] < 0) ans += a[i];
    }
    ans = -ans;
    printf("%d\n", ans);
}
