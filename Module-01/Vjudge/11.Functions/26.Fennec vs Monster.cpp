#include<bits/stdc++.h>

using namespace std;
int main() {
    int n, k;
    scanf("%d%d", & n, & k);
    int a[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", & a[i]);
    }
    sort(a, a + n);
    reverse(a, a + n);
    long long ans = 0;
    for (int i = k; i < n; i++) {
        ans = ans + a[i];
    }
    printf("%lld\n", ans);
}
