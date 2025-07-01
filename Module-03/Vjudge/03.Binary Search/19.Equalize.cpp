#include<bits/stdc++.h>

using namespace std;
#define ll long long
#define I ios::sync_with_stdio(false); cin.tie(0)
int main() {
    int q;
    cin >> q;
    while (q--) {
        ll n, i;
        cin >> n;
        vector < ll > a(n);
        for (i = 0; i < n; i++) {
            cin >> a[i];
        }
        sort(a.begin(), a.end());
        vector < ll > b = {
            a[0]
        };
        for (i = 1; i < n; i++) {
            if (a[i] != a[i - 1]) {
                b.push_back(a[i]);
            }
        }
        ll ans = 0;
        for (i = 0; i < b.size(); i++) {
            ans = max(ans, upper_bound(b.begin(), b.end(), b[i] + n - 1) - b.begin() - i);
        }
        cout << ans << '\n';
    }
}