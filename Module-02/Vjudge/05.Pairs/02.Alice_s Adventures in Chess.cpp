#include<bits/stdc++.h>

using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        pair < int, int > d, pos = {
            0,
            0
        };
        cin >> d.first >> d.second;
        string s;
        cin >> s;
        if (pos == d) {
            cout << "YES\n";
            continue;
        }
        string ans = "NO";
        for (int i = 0; i < 100; i++) {
            for (auto c: s) {
                if (c == 'N') {
                    pos.second++;
                } else if (c == 'S') pos.second--;
                else if (c == 'E') pos.first++;
                else pos.first--;
                if (pos == d) {
                    ans = "YES";
                }
            }
        }
        cout << ans << "\n";
    }
}
