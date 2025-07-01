#include<bits/stdc++.h>

using namespace std;
#define int long long
int a[200000];
int n;
int dp[200000];
int fun(int i) {
    if (i == n) return 0;
    if (i > n) return n + 1;
    if (dp[i] != -1) return dp[i];
    int move1 = fun(i + 1) + 1;
    int move2 = fun(i + a[i] + 1);
    dp[i] = min(move1, move2);
    return min(move1, move2);
}
signed main() {
    int t;
    cin >> t;
    while (t--) {
        cin >> n;
        for (int i = 0; i < n; i++) {
            cin >> a[i];
            dp[i] = -1;
        }
        cout << fun(0) << '\n';
    }
    return 0;
}