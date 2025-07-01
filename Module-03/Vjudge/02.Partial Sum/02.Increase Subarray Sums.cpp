#include<bits/stdc++.h>

using namespace std;
#define ll long long
int main() {
    int q;
    cin >> q;
    while (q--) {
        ll n, x, i, k;
        cin >> n >> x;
        vector < ll > a(n + 1);
        for (i = 1; i <= n; i++) {
            cin >> a[i];
        }
        for (i = 1; i <= n; i++) {
            a[i] += a[i - 1];
        }
        ll ans = 0;
        for (k = 0; k <= n; k++) {
            ll mn = 0;
            for (i = k; i <= n; i++) {
                mn = min(mn, a[i - k]);
                ans = max(ans, a[i] - mn + x * k);
            }
            cout << ans << ' ';
        }
        cout << '\n';
    }
}