#include<bits/stdc++.h>

using namespace std;
using ll = long long;
int main() {
    ll x;
    cin >> x;
    ll ans = 0;
    while (x) {
        ans += x % 2;
        x /= 2;
    }
    cout << ans << '\n';
}