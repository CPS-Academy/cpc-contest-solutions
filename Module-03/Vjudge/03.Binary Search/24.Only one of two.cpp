#include<bits/stdc++.h>

using namespace std;
#define ll unsigned long long
#define I ios::sync_with_stdio(false); cin.tie(0)
int main() {
    ll n, m, k;
    cin >> n >> m >> k;
    ll hi = ULLONG_MAX, lo = 1, mid, ans = 0;
    ll l = (n * m) / __gcd(n, m);
    while (hi >= lo) {
        mid = lo + (hi - lo) / 2;
        ll tmp = mid / n + mid / m - (mid / l) * 2;
        if (tmp >= k) {
            ans = mid;
            hi = mid - 1;
        } else {
            lo = mid + 1;
        }
    }
    cout << ans << '\n';
}