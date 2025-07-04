#include<bits/stdc++.h>

using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        string tmp = "";
        for (int i = 0; i < k; i++) {
            tmp += ('a' + i);
        }
        for (int i = 0; i < n; i++) {
            cout << tmp;
        }
        cout << '\n';
    }
}
