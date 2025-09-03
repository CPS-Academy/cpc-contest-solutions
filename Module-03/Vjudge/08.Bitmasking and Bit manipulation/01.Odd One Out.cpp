#include<bits/stdc++.h>

using namespace std;
using ll = long long;
int main() {
    int q;
    cin >> q;
    while (q--) {
        ll a, b, c;
        cin >> a >> b >> c;
        ll ans = a ^ b ^ c;
        cout << ans << '\n';
    }
}