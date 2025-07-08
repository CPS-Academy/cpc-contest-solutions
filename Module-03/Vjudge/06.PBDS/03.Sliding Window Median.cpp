#include<bits/stdc++.h>

using namespace std;

#include <ext/pb_ds/assoc_container.hpp>

#include <ext/pb_ds/tree_policy.hpp>

using namespace __gnu_pbds;

#define ordered_set tree < pair < int, int > , null_type, less < pair < int, int >> , rb_tree_tag, tree_order_statistics_node_update >

    int main() {
        int n, k;
        cin >> n >> k;
        int a[n];
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        ordered_set s;
        for (int i = 0; i < k; i++) s.insert({
            a[i],
            i
        });
        int mid = k / 2;
        if (k % 2 == 0) mid--;
        cout << ( * s.find_by_order(mid)).first << ' ';
        int l = 0, r = k;
        while (r < n) {
            s.insert({
                a[r],
                r
            });
            s.erase({
                a[l],
                l
            });
            l++;
            r++;
            cout << ( * s.find_by_order(mid)).first << ' ';
        }
        return 0;
    }