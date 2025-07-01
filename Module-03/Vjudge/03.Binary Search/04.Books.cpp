#include<bits/stdc++.h>

using namespace std;
#define ll long long
#define I ios::sync_with_stdio(false); cin.tie(0);
int main() {
    ll n, t, i;
    cin >> n >> t;
    vector < ll > a(n + 1);
    for (i = 1; i <= n; i++) {
        cin >> a[i];
        a[i] += a[i - 1];
    }
    ll ans = 0;
    for (i = 0; i < n; i++) {
        ll k = upper_bound(a.begin(), a.end(), t + a[i]) - a.begin() - 1 - i;
        ans = max(ans, k);
    }
    cout << ans << '\n';
}