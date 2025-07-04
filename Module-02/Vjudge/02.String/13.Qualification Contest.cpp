#include<bits/stdc++.h>

using namespace std;
int main() {
    int n, k;
    cin >> n >> k;
    vector < string > a;
    string s;
    for (int i = 0; i < n; i++) {
        cin >> s;
        if (i < k) {
            a.push_back(s);
        }
    }
    sort(a.begin(), a.end());
    for (int i = 0; i < k; i++) {
        cout << a[i] << '\n';
    }
}
