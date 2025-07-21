#include <bits/stdc++.h>

using namespace std;
int main() {
    int n, q;
    cin >> n >> q;
    vector < int > a[n];
    while (q--) {
        int t;
        cin >> t;
        if (t == 0) {
            int x;
            cin >> t >> x;
            a[t].push_back(x);
        } else if (t == 1) {
            cin >> t;
            int m = a[t].size();
            for (int i = 0; i < m; i++) {
                cout << a[t][i];
                if (i != m - 1) cout << ' ';
            }
            cout << '\n';
        } else {
            cin >> t;
            a[t].clear();
        }
    }
}