#include<bits/stdc++.h>

using namespace std;
#define ll long long
#define I ios::sync_with_stdio(false); cin.tie(0)
int main() {
    int q;
    cin >> q;
    while (q--) {
        ll n, w, i;
        cin >> n >> w;
        vector < ll > a(n);
        for (i = 0; i < n; i++) {
            cin >> a[i];
        }
        ll hi = 1e10, lo = 1, ans = 0, mid;
        while (hi >= lo) {
            mid = (hi + lo) / 2;
            ll t = 0;
            for (i = 0; i < n; i++) {
                t += max(0LL, mid - a[i]);
            }
            if (t <= w) {
                ans = mid;
                lo = mid + 1;
            } else {
                hi = mid - 1;
            }
        }
        cout << ans << '\n';
    }
}