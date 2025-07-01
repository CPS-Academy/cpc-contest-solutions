#include<bits/stdc++.h>

using namespace std;
#define ll long long
int main() {
    int n, i;
    cin >> n;
    vector < int > a(n);
    for (i = 0; i < n; i++) {
        cin >> a[i];
    }
    vector < int > pre(n), suf(n);
    pre[0] = a[0];
    for (i = 1; i < n; i++) {
        pre[i] = __gcd(pre[i - 1], a[i]);
    }
    suf[n - 1] = a[n - 1];
    for (i = n - 2; i >= 0; i--) {
        suf[i] = __gcd(suf[i + 1], a[i]);
    }
    int ans = max(suf[1], pre[n - 2]);
    for (i = 1; i + 1 < n; i++) {
        ans = max(ans, __gcd(pre[i - 1], suf[i + 1]));
    }
    cout << ans << '\n';
}