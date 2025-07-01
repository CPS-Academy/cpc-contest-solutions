#include<bits/stdc++.h>

using namespace std;
#define ll long long
int main() {
    ll n, i, x;
    cin >> n;
    ll a[n];
    for (i = 0; i < n; i++) {
        cin >> a[i];
    }
    cin >> x;
    ll hi = n - 1, lo = 0, mid, ans = -1;
    while (hi >= lo) {
        mid = (hi + lo) / 2;
        if (a[mid] == x) {
            ans = mid;
            break;
        } else if (a[mid] < x) {
            lo = mid + 1;
        } else {
            hi = mid - 1;
        }
    }
    cout << ans << '\n';
}