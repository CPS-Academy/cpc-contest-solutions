#include<bits/stdc++.h>

using namespace std;
int main() {
    int n;
    cin >> n;
    vector < int > cnt(n + 1);
    int ans = 0;
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        if (x > n) {
            ans++;
        } else {
            cnt[x]++;
        }
    }
    for (int i = 1; i <= n; i++) {
        if (cnt[i] >= i) ans += cnt[i] - i;
        else ans += cnt[i];
    }
    cout << ans << '\n';
}