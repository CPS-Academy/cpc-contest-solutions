#include<bits/stdc++.h>

using namespace std;
int main() {
    string s, v = "aoyeui";
    cin >> s;
    int n = s.size(), i;
    for (i = 0; i < n; i++) {
        s[i] = tolower(s[i]);
        int flag = 1;
        for (auto x: v) {
            if (x == s[i]) flag = 0;
        }
        if (flag) {
            cout << "." << s[i];
        }
    }
}
