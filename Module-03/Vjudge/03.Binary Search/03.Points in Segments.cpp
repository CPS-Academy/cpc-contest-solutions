#include<bits/stdc++.h>

using namespace std;
#define ll long long
int main() {
    int q, k;
    cin >> q;
    for (k = 1; k <= q; k++) {
        int n, qq, i;
        cin >> n >> qq;
        vector < int > a(n);
        for (i = 0; i < n; i++) {
            cin >> a[i];
        }
        cout << "Case " << k << ":\n";
        while (qq--) {
            int l, r;
            cin >> l >> r;
            cout << upper_bound(a.begin(), a.end(), r) - lower_bound(a.begin(), a.end(), l) << '\n';
        }
    }
}