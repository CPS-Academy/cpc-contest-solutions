#pragma GCC optimize("Ofast")
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define int long long

vector<ll> dp(16, -1);
ll digitDP(ll i, bool isTight, string& N)
{
    if (i >= N.size())
        return 0;
    if (!isTight && dp[i] != -1)
        return dp[i];
    ll limit;
    if (isTight)
        limit = N[i] - '0';
    else
        limit = 9;
    ll ans = 0;
    for (int k = 0; k <= limit; k++) {
        if (isTight) {
            if (k == limit)
                ans += (1ll + stoll("0" + N.substr(i + 1))) * k + digitDP(i + 1, true, N);
            else
                ans += powl(10, N.size() - i - 1) * k + digitDP(i + 1, false, N);
        } else {
            ans += powl(10, N.size() - i - 1) * k + digitDP(i + 1, false, N);
        }
    }
    if (!isTight)
        dp[i] = ans;
    return ans;
}

ll Solve1(ll n)
{
    if (n <= 0) {
        return 0;
    }
    string N = to_string(n);
    while (N.size() < 16)
        N.insert(N.begin(), '0');
    return digitDP(0, true, N);
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
    cin >> t;
    for (int i = 1; i <= t; i++) {
        Solve();
    }
    return 0;
}
// Coded by Tahsin Arafat (@TahsinArafat)
// Coded for CPS Academy