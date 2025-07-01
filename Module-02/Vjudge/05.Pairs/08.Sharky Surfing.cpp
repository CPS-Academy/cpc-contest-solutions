#include<bits/stdc++.h>

using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m, l;
        cin >> n >> m >> l;
        int ans = 0, k = 1;
        vector < pair < pair < int, int > , int >> a;
        for (int i = 0; i < n; i++) {
            int l, r;
            cin >> l >> r;
            a.push_back({
                {
                    l,
                    r
                },
                1
            });
        }
        for (int i = 0; i < m; i++) {
            int x, v;
            cin >> x >> v;
            a.push_back({
                {
                    x,
                    v
                },
                0
            });
        }
        sort(a.begin(), a.end());
        multiset < int, greater < int >> st;
        for (auto[p, c]: a) {
            if (c == 0) {
                st.insert(p.second);
            } else {
                int j = p.second - p.first + 2;
                while (k < j) {
                    if (st.empty()) {
                        ans = -1;
                        break;
                    }
                    k += * st.begin();
                    st.erase(st.begin());
                    ans++;
                }
            }
            if (ans == -1) break;
        }
        cout << ans << '\n';
    }
}
