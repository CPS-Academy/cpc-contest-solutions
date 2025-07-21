#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector < int > a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        int mx1 = * max_element(a.begin(), a.end());
        vector < int > b;
        for (int i = 0; i < n; i++) {
            if (a[i] != mx1) b.push_back(a[i]);
        }
        int mx2 = * max_element(b.begin(), b.end());
        cout << mx1 + mx2 << '\n';
    }
}