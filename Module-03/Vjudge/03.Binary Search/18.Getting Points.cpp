#include<bits/stdc++.h>

using namespace std;
#define ll long long
int main() {
    int q;
    cin >> q;
    while (q--) {
        ll n, need, l, t;
        cin >> n >> need >> l >> t;
        ll task = 1 + (n - 1) / 7;
        ll hi = n, lo = 0, ans = 0;
        while (hi >= lo) {
            ll mid = (hi + lo) / 2;
            ll point = min(mid * 2, task) * t + mid * l;
            if (need <= point) {
                ans = mid;
                hi = mid - 1;
            } else {
                lo = mid + 1;
            }
        }
        cout << n - ans << '\n';
    }
}