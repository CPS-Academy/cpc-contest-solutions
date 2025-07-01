#include<bits/stdc++.h>

using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector < int > a(n);
        for (auto & x: a) {
            cin >> x;
        }
        int suma = 0, sumb = 0, l = 0, r = n - 1, ans = 0;
        for (int i = 1; i <= n; i++) {
            if (suma <= sumb) {
                suma += a[l];
                l++;
            } else {
                sumb += a[r];
                r--;
            }
            if (suma == sumb) {
                ans = i;
            }
        }
        cout << ans << '\n';
    }
}
