#include<bits/stdc++.h>

using namespace std;
#define ll long long
int main() {
    int q;
    cin >> q;
    while (q--) {
        ll n, k, i;
        cin >> n >> k;
        vector < ll > a(n + 1), h(n + 1), c(n + 1);
        for (i = 1; i <= n; i++) {
            cin >> a[i];
        }
        for (i = 1; i <= n; i++) {
            cin >> h[i];
        }
        for (i = 2; i <= n; i++) {
            if (h[i - 1] % h[i]) c[i] = 1;
        }
        for (i = 1; i <= n; i++) {
            a[i] += a[i - 1];
            c[i] += c[i - 1];
        }
        ll hi = n, lo = 1, ans = 0;
        while (hi >= lo) {
            ll mid = (hi + lo) / 2;
            ll l = 1;
            ll r = l + mid - 1;
            ll ok = 0;
            for (; r <= n; r++, l++) {
                if (a[r] - a[l - 1] <= k && c[r] - c[l] == 0) {
                    ok = 1;
                }
            }
            if (ok) {
                ans = mid;
                lo = mid + 1;
            } else {
                hi = mid - 1;
            }
        }
        cout << ans << '\n';
    }
}