#include<bits/stdc++.h>

using namespace std;
#define ll long long
#define I ios::sync_with_stdio(false); cin.tie(0)
int main() {
    ll n, x, i;
    cin >> n >> x;
    vector < ll > a(n + 1);
    for (i = 1; i <= n; i++) {
        cin >> a[i];
    }
    for (i = 1; i <= n; i++) {
        a[i] += a[i - 1];
    }
    ll ans = 0;
    for (i = 0; i < n; i++) {
        auto it = lower_bound(a.begin(), a.end(), x + a[i]);
        if (it != a.end() && * it == x + a[i]) ans++;
    }
    cout << ans << '\n';
}