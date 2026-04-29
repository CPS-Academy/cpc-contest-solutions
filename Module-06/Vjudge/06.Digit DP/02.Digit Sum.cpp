#pragma GCC optimize("Ofast")
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define int long long
ll MOD = 1e9 + 7;

vector<vector<ll>> dp(10001, vector<ll>(101, -1));

ll dpCalc(ll i, string& N, ll d, ll modNeed, bool tight) // 5 % 3 == 2, modNeed = 3-2=1
{
    if (i == N.size())
        return (modNeed == 0);
    if (!tight && dp[i][modNeed] != -1)
        return dp[i][modNeed];
    ll limit = tight ? (N[i] - '0') : 9;
    ll ans = 0;
    for (ll j = 0; j <= limit; j++) {
        ll newModNeed = (modNeed - j) % d;
        newModNeed = (newModNeed + d) % d;
        ans += dpCalc(i + 1, N, d, newModNeed, tight && j == limit);
        ans %= MOD;
    }
    if (!tight)
        dp[i][modNeed] = ans;
    return ans;
}

ll calc(string& N, ll d)
{
    reverse(N.begin(), N.end());
    while (N.size() < 10000)
        N.push_back('0');
    reverse(N.begin(), N.end());
    return dpCalc(0, N, d, 0, 1);
}

void Solve()
{
    string N;
    ll d;
    cin >> N >> d;
    cout << (calc(N, d) - 1 + MOD) % MOD << '\n';
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
