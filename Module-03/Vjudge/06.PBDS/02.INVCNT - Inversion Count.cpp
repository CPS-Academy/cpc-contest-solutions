#include<bits/stdc++.h>

using namespace std;

#include <ext/pb_ds/assoc_container.hpp>

#include <ext/pb_ds/tree_policy.hpp>

using namespace __gnu_pbds;

#define ordered_set tree < int, null_type, less < int > , rb_tree_tag, tree_order_statistics_node_update >

    void solve() {
        ordered_set s;
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++) cin >> a[i];
        long long ans = 0;
        for (int i = n - 1; i >= 0; i--) {
            s.insert(a[i]);
            ans += s.order_of_key(a[i]);
        }
        cout << ans << "\n";
    }

signed main() {
    int t;
    cin >> t;
    while (t--) {
        cin.ignore();
        solve();
    }
    return 0;
}