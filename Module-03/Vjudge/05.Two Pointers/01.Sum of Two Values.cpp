#include<bits/stdc++.h>

using namespace std;
int main() {
    int n, x;
    cin >> n >> x;
    vector < pair < int, int >> a;
    for (int i = 1; i <= n; i++) {
        int x;
        cin >> x;
        a.push_back({
            x,
            i
        });
    }
    sort(a.begin(), a.end());
    int l = 0, r = n - 1;
    while (l < r) {
        if (a[l].first + a[r].first == x) {
            cout << a[l].second << " " << a[r].second << endl;
            return 0;
        }
        if (a[l].first + a[r].first < x) {
            l++;
        } else {
            r--;
        }
    }
    cout << "IMPOSSIBLE\n";
}
