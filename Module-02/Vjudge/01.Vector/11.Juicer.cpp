#include<bits/stdc++.h>

using namespace std;
int main() {
    int n, b, d;
    cin >> n >> b >> d;
    vector < int > a;
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        if (x <= b) a.push_back(x);
    }
    n = a.size();
    int sum = 0, ans = 0;
    for (int i = 0; i < n; i++) {
        sum += a[i];
        if (sum > d) {
            sum = 0;
            ans++;
        }
    }
    cout << ans << '\n';
}