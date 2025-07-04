#include<bits/stdc++.h>

using namespace std;
int main() {
    string s;
    cin >> s;
    int flag = 1;
    if (s.size() != 8) {
        cout << "No\n";
        return 0;
    }
    if (!isupper(s[0])) flag = 0;
    if (!isupper(s[7])) flag = 0;
    for (int i = 1; i < 7; i++) {
        if (!isdigit(s[i])) flag = 0;
    }
    if (s[1] == '0') flag = 0;
    if (flag) cout << "Yes\n";
    else cout << "No\n";
}
