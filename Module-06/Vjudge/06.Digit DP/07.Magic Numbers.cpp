#pragma GCC optimize("Ofast")
#include <bits/stdc++.h>
using namespace std;
#define int long long
#define ll long long
ll MOD = 1e9 + 7;
ll dp[2001][2001];

ll calc(int i, string& n, int modVal, bool tight, ll d, ll mod)
{
    if (i == (int)n.size())
        return !modVal;
    if (!tight && dp[i][modVal] != -1)
        return dp[i][modVal];
    ll upperLimit = tight ? (n[i] - '0') : 9;
    ll ans = 0;
    for (int j = 0; j <= upperLimit; j++) {
        if (i % 2 == 0) {
            if (j == d)
                continue;
        } else {
            if (j != d)
                continue;
        }
        ll newModVal = (modVal * 10 + j) % mod;
        ans = (ans + calc(i + 1, n, newModVal, tight && j == upperLimit, d, mod)) % MOD;
    }
    if (!tight)
        dp[i][modVal] = ans;
    return ans;
}

bool manCheck(string& a, ll mod, ll d)
{
    ll modVal = 0;
    for (int i = 0; i < (int)a.size(); i++) {
        if (i % 2 == 0) {
            if (a[i] - '0' == d)
                return 0;
        } else {
            if (a[i] - '0' != d)
                return 0;
        }
        modVal = (modVal * 10 + a[i] - '0') % mod;
    }
    return !modVal;
}

int32_t main()
{
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    ll m, d;
    cin >> m >> d;
    string a, b;
    cin >> a >> b;
    // ans = solve(b) - solve(a) + manual_Check(a)
    memset(dp, -1, sizeof(dp));
    ll Ans = calc(0, b, 0, 1, d, m);

    memset(dp, -1, sizeof(dp));
    Ans -= calc(0, a, 0, 1, d, m);

    Ans += manCheck(a, m, d);
    Ans = (Ans + MOD) % MOD;
    cout << Ans << '\n';
    return 0;
}