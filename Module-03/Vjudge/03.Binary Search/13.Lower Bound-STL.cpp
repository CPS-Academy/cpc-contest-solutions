#include<bits/stdc++.h>

using namespace std;
#define ll long long
int main() {
    ll n, i;
    cin >> n;
    vector < ll > a(n);
    for (i = 0; i < n; i++) {
        cin >> a[i];
    }
    ll q;
    cin >> q;
    while (q--) {
        ll x, index;
        cin >> x;
        index = lower_bound(a.begin(), a.end(), x) - a.begin();
        if (index < n && a[index] == x) {
            cout << "Yes ";
        } else {
            cout << "No ";
        }
        cout << index + 1 << '\n';
    }
}