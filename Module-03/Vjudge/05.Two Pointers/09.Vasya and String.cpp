#include<bits/stdc++.h>

using namespace std;
int main() {
    int n, k;
    cin >> n >> k;
    string s;
    cin >> s;
    int r = 0, l = 0, cnta = 0, cntb = 0, ans = 0;
    for (; r < n; r++) {
        if (s[r] == 'a') cnta++;
        else cntb++;
        while (!(cnta <= k || cntb <= k)) {
            if (s[l] == 'a') cnta--;
            else cntb--;
            l++;
        }
        ans = max(ans, r - l + 1);
    }
    cout << ans << '\n';
}
