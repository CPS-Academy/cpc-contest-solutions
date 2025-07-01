#include<bits/stdc++.h>

using namespace std;
#define ll long long
#define I ios::sync_with_stdio(false); cin.tie(0)
int main() {
    ll n, i;
    cin >> n;
    vector < ll > a(n + 1);
    for (i = 1; i <= n; i++) {
        cin >> a[i];
    }
    for (i = 1; i <= n; i++) {
        a[i] += a[i - 1];
    }
    ll q;
    cin >> q;
    while (q--) {
        ll x;
        cin >> x;
        ll ans = lower_bound(a.begin(), a.end(), x) - a.begin();\
        cout << ans << '\n';
    }
}