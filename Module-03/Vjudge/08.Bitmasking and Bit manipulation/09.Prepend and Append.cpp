#include<bits/stdc++.h>

using namespace std;
using ll = long long;
int main() {
    int q;
    cin >> q;
    while (q--) {
        ll n, i, j;
        cin >> n;
        string s;
        cin >> s;
        i = 0, j = n - 1;
        ll ans = n;
        while (i < j) {
            if ((s[i] ^ s[j]) == 0) break;
            ans -= 2;
            i++;
            j--;
        }
        cout << ans << '\n';
    }
}