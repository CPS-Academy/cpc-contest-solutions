#include<bits/stdc++.h>

using namespace std;
#define ll long long
int main() {
    int q;
    cin >> q;
    while (q--) {
        ll n, l, r, i, ans = 0;
        cin >> n >> l >> r;
        vector < ll > a(n);
        for (i = 0; i < n; i++) {
            cin >> a[i];
        }
        sort(a.begin(), a.end());
        for (i = 0; i < n; i++) {
            ll t = upper_bound(a.begin(), a.end(), r - a[i]) - lower_bound(a.begin(), a.end(), l - a[i]);
            if (l <= a[i] + a[i] && a[i] + a[i] <= r) t--;
            ans += t;
        }
        cout << ans / 2 << '\n';
    }
}