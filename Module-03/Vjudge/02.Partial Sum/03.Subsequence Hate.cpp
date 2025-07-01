#include<bits/stdc++.h>

using namespace std;
#define ll long long
int main() {
    int q;
    cin >> q;
    while (q--) {
        string s;
        cin >> s;
        int n = s.size(), i;
        s = '.' + s;
        vector < int > a(n + 1);
        for (i = 1; i <= n; i++) {
            a[i] = s[i] - '0';
        }
        for (i = 1; i <= n; i++) {
            a[i] += a[i - 1];
        }
        int ans = 1000;
        for (i = 0; i < n; i++) {
            ans = min({
                ans,
                i + a[n] - 2 * a[i],
                n - i - a[n] + a[i] * 2
            });
        }
        cout << ans << '\n';
    }

}