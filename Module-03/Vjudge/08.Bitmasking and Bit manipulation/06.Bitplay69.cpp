#include<bits/stdc++.h>

using namespace std;
using ll = long long;
int main() {
    int q;
    cin >> q;
    while (q--) {
        ll n, m, k = 0, i;
        cin >> n >> m;
        if (n > m) {
            cout << 0 << '\n';
            continue;
        }
        if (n < m) {
            for (i = 60; i >= 0; i--) {
                int b0 = (1 LL & (n >> i));
                int b1 = (1 LL & (m >> i));
                if (b0 == b1) continue;
                if (b0) break;
                k ^= (1 LL << i);
            }
            n = (n ^ k);
        }
        if (n == m) {
            for (i = 0; i < 60; i++) {
                if (1 LL & (n >> i)) continue;
                k >>= i;
                k <<= i;
                k ^= (1 LL << i);
                break;
            }
        }
        cout << k << '\n';
    }
}