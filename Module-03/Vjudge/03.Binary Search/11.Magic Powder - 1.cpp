#include<bits/stdc++.h>

using namespace std;
#define ll long long
#define I ios::sync_with_stdio(false); cin.tie(0)
int main() {
    ll n, k, i;
    cin >> n >> k;
    vector < ll > a(n), b(n);
    for (i = 0; i < n; i++) {
        cin >> a[i];
    }
    for (i = 0; i < n; i++) {
        cin >> b[i];
    }
    ll hi = 30000, lo = 0, ans = 0, mid;
    while (hi >= lo) {
        mid = (hi + lo) / 2;
        ll t = 0;
        for (i = 0; i < n; i++) {
            t += max(0LL, a[i] * mid - b[i]);
        }
        if (t > k) {
            hi = mid - 1;
        } else {
            lo = mid + 1;
            ans = mid;
        }
    }
    cout << ans << '\n';
}