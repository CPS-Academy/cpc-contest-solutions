#include<bits/stdc++.h>

using namespace std;
#define ll long long
int main() {
    ll n, m, i;
    cin >> n >> m;
    vector < ll > a(n + 1), b;
    for (i = 1; i <= n; i++) {
        cin >> a[i];
    }
    b = a;
    for (i = 1; i <= n; i++) {
        b[i] *= i;
    }
    for (i = 1; i <= n; i++) {
        a[i] += a[i - 1];
        b[i] += b[i - 1];
    }
    ll ans = -1e18;
    for (i = 1; i + m - 1 <= n; i++) {
        ans = max(ans, b[i + m - 1] - b[i - 1] - (a[i + m - 1] - a[i - 1]) * (i - 1));
    }
    cout << ans << '\n';
}