#include<bits/stdc++.h>

using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        int n = s.size();
        int flag = 0;
        for (int i = 1; i < n / 2; i++) {
            if (s[i] != s[i - 1]) flag = 1;
        }
        if (flag) cout << "YES\n";
        else cout << "NO\n";
    }
}
