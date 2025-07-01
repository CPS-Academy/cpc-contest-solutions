#include<bits/stdc++.h>

using namespace std;
long long nC2(long long n) {
    if (n < 2) {
        return 0;
    }
    return n * (n - 1) / 2;
}
int main() {
    int n, d;
    cin >> n >> d;
    vector < int > a(n);
    for (auto & x: a) {
        cin >> x;
    }
    long long ans = 0;
    for (long long r = 2, l = 0; r < n; r++) {
        while (a[r] - a[l] > d) {
            l++;
        }
        ans += nC2(r - l);
    }
    cout << ans << '\n';
}
