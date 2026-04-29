#pragma GCC optimize("Ofast")
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define int long long

vector<pair<ll, string>> dp(20, { -1, "" });

pair<ll, string> dpCalc(ll i, string& l, string& r, bool isDownTight, bool isUpperTight, bool isNumberStarted)
{
    if (i == l.size())
        return { 1, "" };
    if (!isDownTight && !isUpperTight && dp[i].first != -1)
        return dp[i];
    ll downLimit = isDownTight ? (l[i] - '0') : 0;
    ll upLimit = isUpperTight ? (r[i] - '0') : 9;
    ll product = -1;
    string toRet = "";
    for (ll j = downLimit; j <= upLimit; j++) {
        auto next = dpCalc(i + 1, l, r, isDownTight && j == downLimit, isUpperTight && j == upLimit, isNumberStarted || j);
        ll multiplier = ((isNumberStarted || j) ? j : 1);
        if (multiplier * next.first >= product) {
            product = multiplier * next.first;
            toRet.clear();
            toRet.push_back(j + '0');
            toRet += next.second;
        }
    }
    if (!isDownTight && !isUpperTight)
        return dp[i] = { product, toRet };
    return { product, toRet };
}

void Solve()
{
    string l, r;
    cin >> l >> r;
    while (l.size() < 19)
        l = "0" + l;
    while (r.size() < 19)
        r = "0" + r;
    auto getAns = dpCalc(0, l, r, 1, 1, 0);
    cout << stoll(getAns.second) << '\n';
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