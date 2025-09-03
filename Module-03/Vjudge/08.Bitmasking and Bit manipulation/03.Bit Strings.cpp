#include<bits/stdc++.h>

using namespace std;
using ll = long long;
ll mod = 1e9 + 7;
int main() {
    ll n, ans = 1;
    cin >> n;
    while (n--) {
        ans = ans << 1;
        ans %= mod;
    }
    cout << ans << '\n';
}