#include<bits/stdc++.h>

using namespace std;
using ll = long long;
int main() {
    int q;
    cin >> q;
    while (q--) {
        ll n;
        cin >> n;
        ll ans = 0;
        while (n--) {
            ll x;
            cin >> x;
            ans |= x;
        }
        cout << ans << '\n';
    }
}