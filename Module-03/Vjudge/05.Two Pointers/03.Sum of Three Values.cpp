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
    for (int i = 0; i < n; i++) {
        int l = i + 1;
        int r = n - 1;
        int tmp_x = x - a[i].first;
        while (l < r) {
            if (a[l].first + a[r].first == tmp_x) {
                cout << a[i].second << " " << a[l].second << " " << a[r].second << "\n";
                return 0;
            }
            if (a[l].first + a[r].first < tmp_x) {
                l++;
            } else {
                r--;
            }
        }
    }
    cout << "IMPOSSIBLE\n";
}
