#include<bits/stdc++.h>

using namespace std;

#include <ext/pb_ds/assoc_container.hpp>

#include <ext/pb_ds/tree_policy.hpp>

using namespace __gnu_pbds;

#define ordered_set tree < int, null_type, less < int > , rb_tree_tag, tree_order_statistics_node_update >

    signed main() {
        int t;
        cin >> t;
        while (t--) {
            int n, q;
            cin >> n >> q;
            int key[n + 1] {};
            ordered_set s;
            for (int i = 1; i <= n; i++) {
                int vl;
                cin >> vl;
                if (key[vl] == 0) key[vl] = i;
                s.insert(i);
            }
            int l = 0;
            while (q--) {
                int vl;
                cin >> vl;
                int pos = s.order_of_key(key[vl]);
                cout << pos + 1 << "\n";
                s.erase(key[vl]);
                key[vl] = l;
                s.insert(l);
                l--;
            }
        }
        return 0;
    }