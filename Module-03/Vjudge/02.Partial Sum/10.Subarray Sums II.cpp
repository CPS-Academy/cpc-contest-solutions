#include<bits/stdc++.h>

using namespace std;
#define ll long long
int main() {
    ll n, x, v, i;
    cin >> n >> x;
    map < ll, ll > mp;
    vector < ll > a(n + 1);
    for (i = 1; i <= n; i++) {
        cin >> a[i];
    }
    ll ans = 0;
    mp[0] = 1;
    for (i = 1; i <= n; i++) {
        a[i] += a[i - 1];
        ans += mp[a[i] - x];
        mp[a[i]]++;
    }
    cout << ans << '\n';
}