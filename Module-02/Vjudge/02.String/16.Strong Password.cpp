#include<bits/stdc++.h>

using namespace std;
int main() {
    int n;
    cin >> n;
    string s, a = "!@#$%^&*()-+";
    cin >> s;
    int digit = 1, lower = 1, upper = 1, special = 1;
    for (int i = 0; i < n; i++) {
        if (isdigit(s[i])) digit = 0;
        if (islower(s[i])) lower = 0;
        if (isupper(s[i])) upper = 0;
        for (auto y: a) {
            if (s[i] == y) special = 0;
        }
    }
    int ans = digit + lower + upper + special;
    ans = max(ans, 6 - n);
    cout << ans << '\n';
}
