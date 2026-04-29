#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define int long long

int dp[10][90][90];
ll calc(ll i, string& n, bool tight, int normalMod, int digitSumMod, ll k)
{
    if (i == (ll)n.size())
        return !normalMod && !digitSumMod;
    if (!tight && dp[i][normalMod][digitSumMod] != -1)
        return dp[i][normalMod][digitSumMod];
    int upperLimit = tight ? (n[i] - '0') : 9;
    int ans = 0;
    for (int j = 0; j <= upperLimit; j++) {
        int newDigitSumMod = (digitSumMod + j) % k;
        int newNormalMod = (normalMod * 10 + j) % k;
        ans += calc(i + 1, n, tight && j == upperLimit, newNormalMod, newDigitSumMod, k);
    }
    if (!tight)
        dp[i][normalMod][digitSumMod] = ans;
    return ans;
}

ll solve2(ll a, ll k)
{
    string n = to_string(a);
    while (n.size() < 10)
        n.insert(n.begin(), '0');
    memset(dp, -1, sizeof(dp));
    return calc(0, n, true, 0, 0, k);
}

void Solve()
{
    int a, b, k;
    cin >> a >> b >> k;
    if (k > 90) {
        cout << "0\n";
        return;
    }
    cout << solve2(b, k) - solve2(a - 1, k) << '\n';
}

int32_t main()
{
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    int t = 1;
    cin >> t;
    for (int i = 1; i <= t; i++) {
        cout << "Case " << i << ": ";
        Solve();
    }
    return 0;
}