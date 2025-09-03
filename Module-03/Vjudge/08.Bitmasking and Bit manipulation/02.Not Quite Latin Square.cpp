#include<bits/stdc++.h>

using namespace std;
using ll = long long;
int main() {
    int q;
    cin >> q;
    while (q--) {
        string s;
        int i, k = 0 ^ 1 ^ 2, j;
        for (i = 0; i < 3; i++) {
            cin >> s;
            if (s[0] == '?' || s[1] == '?' || s[2] == '?') {
                for (j = 0; j < 3; j++) {
                    if (s[j] != '?') k ^= s[j] - 'A';
                }
            }
        }
        cout << (char)('A' + k) << '\n';
    }
}