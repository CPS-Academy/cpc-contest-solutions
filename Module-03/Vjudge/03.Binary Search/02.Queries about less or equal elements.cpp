#include<bits/stdc++.h>

using namespace std;
#define ll long long
int main() {
    int n, m, i;
    cin >> n >> m;
    vector < int > a(n), b(m);
    for (i = 0; i < n; i++) {
        cin >> a[i];
    }
    sort(a.begin(), a.end());
    for (i = 0; i < m; i++) {
        cin >> b[i];
        int index = upper_bound(a.begin(), a.end(), b[i]) - a.begin();
        cout << index << ' ';
    }
}