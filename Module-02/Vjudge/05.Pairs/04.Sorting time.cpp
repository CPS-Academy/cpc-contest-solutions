#include<bits/stdc++.h>

using namespace std;
int main() {
    int n;
    cin >> n;
    vector < pair < int, pair < int, int >>> a;
    for (int i = 0; i < n; i++) {
        int h, m, s;
        cin >> h >> m >> s;
        a.push_back({
            h,
            {
                m,
                s
            }
        });
    }
    sort(a.begin(), a.end());
    for (int i = 0; i < n; i++) {
        cout << a[i].first << " " << a[i].second.first << " " << a[i].second.second << '\n';
    }

}
