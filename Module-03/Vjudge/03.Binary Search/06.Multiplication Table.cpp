#include<bits/stdc++.h>

using namespace std;
#define ll long long
#define I ios::sync_with_stdio(false); cin.tie(0)
int main() {
    ll n, i;
    cin >> n;
    ll middle = n * n / 2 + 1;
    ll hi = n * n, lo = 1, ans, mid;
    while (hi >= lo) {
        mid = (hi + lo) / 2;
        ll r = 0, l = 0;
        for (i = 1; i <= n; i++) {
            r += min(n, mid / i);
            l += min(n, (mid - 1) / i);
        }
        if (l < middle && middle <= r) {
            ans = mid;
            break;
        } else if (r < middle) {
            lo = mid + 1;
        } else {
            hi = mid - 1;
        }
    }
    cout << ans << '\n';
}