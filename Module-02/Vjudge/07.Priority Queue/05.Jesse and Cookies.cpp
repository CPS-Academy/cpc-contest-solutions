#include <bits/stdc++.h>

using namespace std;
#define ll long long
int main() {
    ll n, k;
    cin >> n >> k;
    priority_queue < ll, vector < ll > , greater < ll >> q;
    for (int i = 0; i < n; i++) {
        ll x;
        cin >> x;
        q.push(x);
    }
    while (q.top() < k) {
        if (q.size() == 1) {
            q.pop();
            break;
        }
        ll x = q.top();
        q.pop();
        ll y = q.top();
        q.pop();
        q.push(x + y + y);
    }
    int ans;
    if (q.size() == 0) ans = -1;
    else ans = n - q.size();
    cout << ans << '\n';
}