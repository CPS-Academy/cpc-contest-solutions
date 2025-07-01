#include<bits/stdc++.h>

using namespace std;
int main() {
    int n, x;
    cin >> n >> x;
    int a[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    int l = 0, r = 0, sum = 0, ans = 0;
    while (l < n) {
        if (sum == x) ans++;
        if (sum < x && r < n) {
            sum += a[r];
            r++;
        } else {
            sum -= a[l];
            l++;
        }
    }
    cout << ans << '\n';
}
