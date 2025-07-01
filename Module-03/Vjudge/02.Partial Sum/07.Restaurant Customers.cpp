#include<bits/stdc++.h>

using namespace std;
#define ll long long
int main() {
    int n, i;
    cin >> n;
    vector < pair < int, int >> a;
    for (i = 0; i < n; i++) {
        int x, y;
        cin >> x >> y;
        a.push_back({
            x,
            1
        });
        a.push_back({
            y,
            -1
        });
    }
    sort(a.begin(), a.end());
    vector < int > pre;
    for (auto[value, x]: a) {
        pre.push_back(x);
    }
    int mn = 0, ans = 0;
    for (i = 1; i < pre.size(); i++) {
        pre[i] += pre[i - 1];
    }
    for (i = 0; i < pre.size(); i++) {
        mn = min(pre[i], mn);
        ans = max(ans, pre[i] - mn);
    }
    cout << ans << '\n';
}