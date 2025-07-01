#include<bits/stdc++.h>

using namespace std;
int main() {
    long long n, d;
    cin >> n >> d;
    vector < pair < long long, long long >> a;
    for (int i = 0; i < n; i++) {
        long long m, f;
        cin >> m >> f;
        a.push_back({
            m,
            f
        });
    }
    sort(a.begin(), a.end());
    long long sum = 0, ans = 0;
    for (int l = 0, r = 0; r < n; r++) {
        sum += a[r].second;
        while (a[r].first - a[l].first >= d) {
            sum -= a[l].second;
            l++;
        }
        ans = max(ans, sum);
    }
    cout << ans << '\n';
}
