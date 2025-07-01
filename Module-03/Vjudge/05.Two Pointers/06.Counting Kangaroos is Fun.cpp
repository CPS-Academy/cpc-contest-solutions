#include<bits/stdc++.h>

using namespace std;
int main() {
    int n;
    cin >> n;
    vector < int > a(n);
    for (auto & x: a) {
        cin >> x;
    }
    sort(a.begin(), a.end());
    int nn = n / 2, ans = n;
    for (int i = 0, j = nn; i < nn && j < n; j++) {
        if (a[i] + a[i] <= a[j]) {
            ans--;
            i++;
        }
    }
    cout << ans << '\n';
}
