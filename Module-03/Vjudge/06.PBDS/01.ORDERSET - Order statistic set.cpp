#include<bits/stdc++.h>

using namespace std;

#include <ext/pb_ds/assoc_container.hpp>

#include <ext/pb_ds/tree_policy.hpp>

using namespace __gnu_pbds;

#define ordered_set tree < int, null_type, less < int > , rb_tree_tag, tree_order_statistics_node_update >

    int main() {
        int q;
        cin >> q;
        ordered_set s;
        while (q--) {
            char ch;
            int x;
            cin >> ch >> x;
            if (ch == 'I') s.insert(x);
            else if (ch == 'D') s.erase(x);
            else if (ch == 'C') cout << s.order_of_key(x) << "\n";
            else {
                if (s.size() < x) cout << "invalid\n";
                else {
                    x--;
                    cout << * s.find_by_order(x) << "\n";
                }
            }
        }
    }