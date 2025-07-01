#include<bits/stdc++.h>

using namespace std;
#define ll long long
#define I ios::sync_with_stdio(false); cin.tie(0)
int main() {
    ll n, k, i;
    cin >> n >> k;
    vector < ll > a(n);
    for (i = 0; i < n; i++) {
        cin >> a[i];
    }
    ll hi = 0, lo = 0, ans, mid;
    for (i = 0; i < n; i++) {
        lo = max(lo, a[i]);
        hi += a[i];
    }
    while (hi >= lo) {
        mid = (hi + lo) / 2;
        ll tmp = 0, cnt = 1;
        for (i = 0; i < n; i++) {
            tmp += a[i];
            if (tmp > mid) {
                cnt++;
                tmp = a[i];
            }
        }
        if (cnt > k) {
            lo = mid + 1;
        } else {
            hi = mid - 1;
            ans = mid;
        }
    }
    cout << ans << '\n';
}