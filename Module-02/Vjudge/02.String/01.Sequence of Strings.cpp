#include<bits/stdc++.h>

using namespace std;
int main() {
    int n;
    cin >> n;
    vector < string > s;
    for (int i = 0; i < n; i++) {
        string tmp;
        cin >> tmp;
        s.push_back(tmp);
    }
    reverse(s.begin(), s.end());
    for (int i = 0; i < n; i++) {
        cout << s[i] << '\n';
    }
}
