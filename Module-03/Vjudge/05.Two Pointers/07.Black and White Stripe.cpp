#include<bits/stdc++.h>

using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        string s;
        cin >> s;
        int ans = k, l, r, cnt = 0;
        for (r = 0; r < k - 1; r++) {
            cnt += (s[r] == 'W');
        }
        for (l = 0; r < n; r++, l++) {
            cnt += (s[r] == 'W');
            ans = min(ans, cnt);
            cnt -= (s[l] == 'W');
        }
        cout << ans << '\n';
    }
}
