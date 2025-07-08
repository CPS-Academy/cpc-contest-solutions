#include <bits/stdc++.h>

using namespace std;

#define ll long long

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, q;
    cin >> n >> q;

    int a[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    while (q--) {
        ll x;
        cin >> x;

        queue < int > window;
        ll sum = 0;

        ll ans = 0;

        for (int i = 0; i < n; i++) {
            window.push(a[i]);
            sum += a[i];

            while (sum > x) {
                sum -= window.front();
                window.pop();
            }

            ans += window.size();
        }

        cout << ans << endl;
    }

    return 0;
}