#include<bits/stdc++.h>

using namespace std;
int main() {
    vector < int > xorr(300005);
    for (int i = 1; i < 300005; i++) {
        xorr[i] = i ^ xorr[i - 1];
    }
    int q;
    cin >> q;
    while (q--) {
        int a, b;
        cin >> a >> b;
        int y = xorr[a - 1];
        int ans;
        if (y == b) {
            ans = a;
        } else if ((y ^ a) == b) {
            ans = a + 2;
        } else {
            ans = a + 1;
        }
        cout << ans << '\n';
    }
}