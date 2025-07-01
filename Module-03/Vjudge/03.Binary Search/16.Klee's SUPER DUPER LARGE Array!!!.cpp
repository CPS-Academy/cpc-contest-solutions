#include<bits/stdc++.h>

using namespace std;
#define ll long long
#define I ios::sync_with_stdio(false); cin.tie(0)
int main() {
    int q;
    cin >> q;
    while (q--) {
        ll n, k;
        cin >> n >> k;
        ll hi = n, lo = 1, ans = 1e15, mid;
        while (hi >= lo) {
            mid = (hi + lo) / 2;
            ll pos = (k + k + mid - 1) * mid / 2;
            ll neg = (k + mid + k + n - 1) * (n - mid) / 2;
            ans = min(ans, abs(pos - neg));
            if (neg > pos) {
                lo = mid + 1;
            } else {
                hi = mid - 1;
            }
        }
        cout << ans << '\n';
    }
}