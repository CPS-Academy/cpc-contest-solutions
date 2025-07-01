#include<bits/stdc++.h>

using namespace std;
#define ll long long
int main() {
    ll n, t, i;
    cin >> n >> t;
    vector < ll > a(n);
    for (i = 0; i < n; i++) {
        cin >> a[i];
    }
    ll hi = 1e18, lo = 0, mid, ans = 1e18;
    while (hi >= lo) {
        mid = (hi + lo) / 2;
        ll k = 0;
        for (i = 0; i < n; i++) {
            k += mid / a[i];
            if (k >= t) break;
        }
        if (k >= t) {
            ans = mid;
            hi = mid - 1;
        } else {
            lo = mid + 1;
        }
    }
    cout << ans << '\n';
}