#include<bits/stdc++.h>

using namespace std;
#define ll long long
int main() {
    int q;
    cin >> q;
    while (q--) {
        ll n, k, i;
        cin >> n >> k;
        vector < ll > a(k);
        for (i = 0; i < k; i++) {
            cin >> a[i];
            a[i] = n - a[i];
        }
        sort(a.begin(), a.end());
        ll hi = k, lo = 0, mid, ans = 0;
        while (hi >= lo) {
            mid = (hi + lo) / 2;
            ll t = 0;
            for (i = 0; i < mid; i++) {
                t += a[i];
            }
            if (t < n) {
                ans = mid;
                lo = mid + 1;
            } else {
                hi = mid - 1;
            }
        }
        cout << ans << '\n';
    }
}