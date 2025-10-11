#include <bits/stdc++.h>

using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector < pair < int, int >> a;
        for (int i = 0; i < n; i++) {
            int d, r;
            cin >> d >> r;
            a.push_back({
                d,
                r
            });
        }
        sort(a.begin(), a.end());
        priority_queue < int, vector < int > , greater < int >> q;
        for (int i = 0; i < n; i++) {
            q.push(a[i].second);
            if (a[i].first < q.size()) {
                q.pop();
            }
        }
        long long ans = 0;
        while (q.size()) {
            ans += q.top();
            q.pop();
        }
        cout << ans << '\n';
    }
}