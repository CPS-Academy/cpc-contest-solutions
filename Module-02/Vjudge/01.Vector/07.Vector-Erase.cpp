#include<bits/stdc++.h>

using namespace std;
int main() {
    int n;
    cin >> n;
    vector < int > v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }
    int x;
    cin >> x;
    v.erase(v.begin() + x - 1);
    int a, b;
    cin >> a >> b;
    v.erase(v.begin() + a - 1, v.begin() + b - 1);
    n = v.size();
    cout << n << '\n';
    for (int i = 0; i < n; i++) {
        cout << v[i] << ' ';
    }
    cout << '\n';
}