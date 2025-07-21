#include<bits/stdc++.h>

using namespace std;
int main() {
    int n;
    cin >> n;
    vector < int > a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    int ans = -1;
    for (int i = 1; i < n; i++) {
        if (a[i] > a[0]) {
            ans = i + 1;
            break;
        }
    }
    cout << ans << '\n';
}