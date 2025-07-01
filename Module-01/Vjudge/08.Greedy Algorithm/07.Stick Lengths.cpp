#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    scanf("%d", & n);
    int i, a[n];
    for (i = 0; i < n; i++) {
        scanf("%d", & a[i]);
    }
    sort(a, a + n);
    long long ans = 0;
    int med = a[n / 2];
    for (i = 0; i < n; i++) {
        ans += abs(a[i] - med);
    }
    printf("%lld\n", ans);

    return 0;
}
