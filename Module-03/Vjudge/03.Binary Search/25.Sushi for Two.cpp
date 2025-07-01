#include<bits/stdc++.h>

using namespace std;
#define ll long long
int main() {
    int n, i;
    cin >> n;
    vector < int > a(n), b;
    for (i = 0; i < n; i++) {
        cin >> a[i];
    }
    int t = 1;
    for (i = 1; i < n; i++) {
        if (a[i] == a[i - 1]) {
            t++;
        } else {
            b.push_back(t);
            t = 1;
        }
    }
    b.push_back(t);
    int hi = n, lo = 0, mid, ans = 0;
    while (hi >= lo) {
        mid = (hi + lo) / 2;
        int ok = 0;
        for (i = 1; i < b.size(); i++) {
            if (min(b[i], b[i - 1]) * 2 >= mid) ok = 1;
        }
        if (ok == 1) {
            ans = mid;
            lo = mid + 1;
        } else {
            hi = mid - 1;
        }
    }
    cout << ans << '\n';
}