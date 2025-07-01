#include<bits/stdc++.h>

using namespace std;
#define ll long long
#define I ios::sync_with_stdio(false); cin.tie(0)
int main() {
    ll i, s, b;
    cin >> s >> b;
    vector < ll > a(s);
    for (i = 0; i < s; i++) {
        cin >> a[i];
    }
    vector < pair < ll, ll >> tmp;
    for (i = 0; i < b; i++) {
        ll x, y;
        cin >> x >> y;
        tmp.push_back({
            x,
            y
        });
    }
    sort(tmp.begin(), tmp.end());
    vector < ll > defence(b + 1), gold(b + 1);
    for (i = 0; i < b; i++) {
        defence[i + 1] = tmp[i].first;
        gold[i + 1] = tmp[i].second;
    }
    for (i = 1; i <= b; i++) {
        gold[i] += gold[i - 1];
    }
    for (i = 0; i < s; i++) {
        int index = upper_bound(defence.begin(), defence.end(), a[i]) - defence.begin() - 1;
        cout << gold[index] << ' ';
    }
}