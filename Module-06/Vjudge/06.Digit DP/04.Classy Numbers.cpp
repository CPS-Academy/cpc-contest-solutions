#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define int ll
ll dp[20][4];
ll digitdp(ll i, bool tight, string& n, ll rmn)
{
    if (rmn < 0)
        return 0;
    if (i == n.size())
        return (rmn != 3);
    if (!tight && dp[i][rmn] != -1)
        return dp[i][rmn];
    ll endTill = tight ? (n[i] - '0') : 9;
    ll ans = 0;
    for (ll k = 0; k <= endTill; k++)
        ans += digitdp(i + 1, (tight && (k == endTill)), n, rmn - (k > 0));
    if (!tight)
        dp[i][rmn] = ans;
    return ans;
}
ll ans(ll n)
{
    if (n <= 0)
        return 0;
    string N = to_string(n);
    reverse(N.begin(), N.end());
    while (N.size() < 19)
        N += '0';
    reverse(N.begin(), N.end());
    return digitdp(0, true, N, 3);
}

int32_t main()
{
    memset(dp, -1, sizeof(dp));
    ios::sync_with_stdio(0),
        cin.tie(0), cout.tie(0);
    int t;
    cin >> t;
    while (t--) {
        ll a, b;
        cin >> a >> b;
        cout << ans(b) - ans(a - 1) << "\n";
    }
    return 0;
}