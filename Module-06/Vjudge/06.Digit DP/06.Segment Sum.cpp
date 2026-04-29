#pragma GCC optimize("Ofast")
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define int long long
ll MOD = 998244353;
ll k;
pair<ll, ll> dp[19][1 << 10]; // {count, sum}

pair<ll, ll> dpCalc(ll i, string& N, ll mask, bool tight)
{
    if (__builtin_popcountll(mask) > k)
        return { 0, 0 };
    if (i == N.size()) {
        if (mask && __builtin_popcountll(mask) <= k)
            return { 1, 0 };
        return { 0, 0 };
    }
    if (!tight && dp[i][mask].first != -1) // From i th digit, number included so far
        return dp[i][mask];
    pair<ll, ll> ans = { 0, 0 };
    ll upperLimit = tight ? (N[i] - '0') : 9;
    for (int j = 0; j <= upperLimit; j++) {
        pair<ll, ll> toAdd;
        if (mask == 0 && j == 0) // Number is not started yet
            toAdd = dpCalc(i + 1, N, mask, tight && j == upperLimit);
        else
            toAdd = dpCalc(i + 1, N, mask | (1 << j), tight && j == upperLimit);
        ans.first = (ans.first + toAdd.first) % MOD;
        ans.second = (ans.second + toAdd.second) % MOD;
        ans.second += ((ll)powl(10, N.size() - i - 1) % MOD) * (j * toAdd.first % MOD);
        ans.second %= MOD;
    }
    if (!tight)
        dp[i][mask] = ans;
    return ans;
}

ll calc(string N)
{
    reverse(N.begin(), N.end());
    while (N.size() < 19)
        N.push_back('0');
    reverse(N.begin(), N.end());
    return dpCalc(0, N, 0, 1).second;
}

void Solve()
{
    ll l, r;
    cin >> l >> r >> k;
    cout << (calc(to_string(r)) - calc(to_string(l - 1)) + MOD) % MOD << '\n';
}

int32_t main()
{
    memset(dp, -1, sizeof(dp));
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