#include<bits/stdc++.h>

using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        string s;
        cin >> n;
        cin >> s;
        char mn = * min_element(s.begin(), s.end());
        int mni = 0;
        for (int i = 1; i < n; i++) {
            if (mn == s[i]) mni = i;
        }
        cout << mn;
        for (int i = 0; i < n; i++) {
            if (mni == i) continue;
            cout << s[i];
        }
        cout << '\n';
    }
}
