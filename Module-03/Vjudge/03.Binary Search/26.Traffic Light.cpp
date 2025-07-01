#include<bits/stdc++.h>

using namespace std;
#define ll long long
int main() {
    int q;
    cin >> q;
    while (q--) {
        int n, i, x;
        char c;
        cin >> n >> c;
        string s;
        cin >> s;
        vector < int > a;
        for (i = 0; i < n; i++) {
            if (s[i] == c) {
                a.push_back(i);
            }
        }
        s += s;
        vector < int > b;
        for (i = 0; i < s.size(); i++) {
            if (s[i] == 'g') {
                b.push_back(i);
            }
        }
        int ans = 0;
        for (auto x: a) {
            ans = max(ans, * lower_bound(b.begin(), b.end(), x) - x);
        }
        cout << ans << '\n';
    }
}