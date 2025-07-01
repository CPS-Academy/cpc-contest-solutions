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
        vector < ll > value, index;
        for (i = 1; i <= n; i++) {
            ll x;
            cin >> x;
            if (i > x) {
                value.push_back(x);
                index.push_back(i);
            }
        }
        ll ans = 0;
        for (i = 0; i < value.size(); i++) {
            ans += lower_bound(index.begin(), index.end(), value[i]) - index.begin();
        }
        cout << ans << '\n';
    }
}