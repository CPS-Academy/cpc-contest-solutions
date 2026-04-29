// https://cses.fi/problemset/task/2220/
// https://cses.fi/paste/096cbe5292589fa1e448a5/
#pragma GCC optimize("Ofast")
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define int long long

// vector<ll> dp(20, -1);
ll dp[20][11];
ll digitDP(ll i, bool isTight, string& N, int x) // i-1 index e x use korechi
{
    // x = 10, no number started yet
    // x = forbidden digit for current index i
    if (i >= N.size())
        return 1;
    if (!isTight && dp[i][x] != -1)
        return dp[i][x];
    ll limit = isTight ? N[i] - '0' : 9;
    ll ans = 0;
    for (int k = 0; k <= limit; k++) {
        if (k == x)
            continue;
        ans += digitDP(i + 1, (k == limit) && isTight, N, ((x == 10) ? (k != 0 ? k : 10) : k));
    }
    if (!isTight)
        dp[i][x] = ans;
    return ans;
}

ll Solve1(ll n)
{
    if (n == 0)
        return 1;
    if (n < 0)
        return 0;
    memset(dp, -1, sizeof(dp));
    string N = to_string(n);
    while (N.size() < 19)
        N.insert(N.begin(), '0');
    return digitDP(0, true, N, 10);
}
void Solve()
{
    ll l, r;
    cin >> l >> r;
    cout << Solve1(r) - Solve1(l - 1) << '\n';
}

int32_t main()
{
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    int t = 1;
    // cin >> t;
    for (int i = 1; i <= t; i++) {
        Solve();
    }
    return 0;
}
// Coded by Tahsin Arafat (@TahsinArafat)
// Coded for CPS Academy