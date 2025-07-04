#include<bits/stdc++.h>

using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, i, ok = 0;
        string s;
        cin >> n >> s;
        for (i = 0; i < n - 1; i++) {
            if (s[i] != s[i + 1]) {
                ok = 1;
                break;
            }
        }
        if (ok == 0) {
            cout << -1 << '\n';
        } else {
            if (s[i] == 'R') {
                cout << 0 << '\n';
            } else {
                cout << i + 1 << '\n';
            }
        }
    }
}
