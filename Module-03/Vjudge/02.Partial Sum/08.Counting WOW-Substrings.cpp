#include<bits/stdc++.h>

using namespace std;
#define ll long long
int main() {
    ll k;
    vector < ll > pre;
    for (k = 0; k < 500005; k++) {
        pre.push_back(k);
    }
    for (k = 1; k < pre.size(); k++) {
        pre[k] += pre[k - 1];
    }
    ll q;
    cin >> q;
    for (k = 1; k <= q; k++) {
        string s;
        cin >> s;
        ll i, j, n;
        n = s.size();
        ll ans = 0;
        for (i = 0; i < n; i++) {
            int cnt[26] = {
                0
            };
            for (j = i; j < n; j++) {
                if (cnt[s[j] - 'a'] != 0) break;
                cnt[s[j] - 'a']++;
            }
            ans += pre[j - i];
            ans %= 100007;
        }
        cout << "Case " << k << ": " << ans << '\n';
    }
}