#pragma GCC optimize("Ofast")
#include <bits/stdc++.h>
using namespace std;
#define int long long
#define ll long long
ll dp[15][127][127];
ll calc(ll i, string& n, bool isTight, ll curDigitSum, ll modVal, ll digitSum)
{
    if (curDigitSum > digitSum)
        return 0;
    if (i == n.size())
        return curDigitSum == digitSum && modVal == 0;
    if (!isTight && dp[i][modVal][curDigitSum] != -1)
        return dp[i][modVal][curDigitSum];
    ll ans = 0;
    ll upperLimit = isTight ? (n[i] - '0') : 9;
    for (int j = 0; j <= upperLimit; j++) {
        ans += calc(i + 1, n, isTight && j == upperLimit, curDigitSum + j, (modVal * 10 + j) % digitSum, digitSum);
    }
    if (!isTight)
        dp[i][modVal][curDigitSum] = ans;
    return ans;
}

int32_t main()
{
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    string n;
    cin >> n;
    ll ans = 0;
    for (int digitSum = 1; digitSum <= 9 * 14; digitSum++) {
        memset(dp, -1, sizeof(dp));
        ans += calc(0, n, 1, 0, 0, digitSum);
    }
    cout << ans << '\n';
    return 0;
}