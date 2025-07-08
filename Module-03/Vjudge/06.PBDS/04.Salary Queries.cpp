#include<bits/stdc++.h>

using namespace std;

#include <ext/pb_ds/assoc_container.hpp>

#include <ext/pb_ds/tree_policy.hpp>

using namespace __gnu_pbds;

#define ordered_set tree < pair < int, int > , null_type, less < pair < int, int >> , rb_tree_tag, tree_order_statistics_node_update >

    int main() {
        int n, q;
        cin >> n >> q;
        int a[n];
        ordered_set s;
        for (int i = 0; i < n; i++) {
            cin >> a[i];
            s.insert({
                a[i],
                i
            });
        }
        while (q--) {
            char ch;
            cin >> ch;
            if (ch == '!') {
                int k, x;
                cin >> k >> x;
                k--;
                s.erase({
                    a[k],
                    k
                });
                a[k] = x;
                s.insert({
                    a[k],
                    k
                });
            } else {
                int a, b;
                cin >> a >> b;
                cout << s.order_of_key({
                    b + 1,
                    0
                }) - s.order_of_key({
                    a,
                    0
                }) << "\n";
            }
        }
        return 0;
    }