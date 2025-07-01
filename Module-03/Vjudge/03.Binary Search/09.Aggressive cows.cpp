#include<bits/stdc++.h>

using namespace std;
#define ll long long
#define I ios::sync_with_stdio(false); cin.tie(0)
int main() {
    int q;
    cin >> q;
    while (q--) {
        ll n, c, i;
        cin >> n >> c;
        vector < ll > a(n);
        for (i = 0; i < n; i++) {
            cin >> a[i];
        }
        sort(a.begin(), a.end());
        ll hi = a[n - 1], lo = 0, ans, mid;
        while (hi >= lo) {
            mid = (hi + lo) / 2;
            ll last_taken = a[0], cnt = 1;
            for (i = 1; i < n; i++) {
                if (a[i] - last_taken >= mid) {
                    last_taken = a[i];
                    cnt++;
                }
            }
            if (cnt >= c) {
                lo = mid + 1;
                ans = mid;
            } else {
                hi = mid - 1;
            }
        }
        cout << ans << '\n';
    }

}