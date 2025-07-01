#include<bits/stdc++.h>

using namespace std;
#define ll long long
int main() {
    ll n, i, x;
    cin >> n;
    map < ll, ll > mp;
    vector < ll > a(n);
    for (i = 0; i < n; i++) {
        cin >> a[i];
        mp[a[i]]++;
    }
    ll ans = 0;
    vector < ll > pre(n + 5);
    for (i = 1; i < pre.size(); i++) {
        pre[i] = i;
    }
    for (i = 1; i < pre.size(); i++) {
        pre[i] += pre[i - 1];
    }
    for (auto[x, y]: mp) {
        ans += pre[y - 1];
    }
    for (i = 0; i < n; i++) {
        cout << ans - mp[a[i]] + 1 << '\n';
    }
}