#include<bits/stdc++.h>

using namespace std;
int main() {
    int n;
    cin >> n;
    vector < int > a;
    int x;
    cin >> x;
    a.push_back(x);
    int ans = 1;
    for (int i = 1; i < n; i++) {
        cin >> x;
        if (x < a.back()) {
            a.clear();
        }
        a.push_back(x);
        ans = max(ans, (int) a.size());
    }
    cout << ans << '\n';
}