#include<bits/stdc++.h>

using namespace std;
#define ll long long
int main() {
    int q;
    cin >> q;
    while (q--) {
        ll n, h, i;
        cin >> n >> h;
        vector < ll > a(n);
        for (i = 0; i < n; i++) {
            cin >> a[i];
        }
        ll k, hi = h, lo = 1, mid;
        while (hi >= lo) {
            mid = (hi + lo) / 2;
            ll d = 0;
            for (i = 0; i < n - 1; i++) {
                d += min(a[i + 1] - a[i], mid);
            }
            d += mid;
            if (d >= h) {
                hi = mid - 1;
                k = mid;
            } else {
                lo = mid + 1;
            }
        }
        cout << k << '\n';
    }
}