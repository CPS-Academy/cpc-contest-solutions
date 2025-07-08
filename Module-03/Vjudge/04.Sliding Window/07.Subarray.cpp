#include <bits/stdc++.h>

using namespace std;

#define ll long long

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    int x[n];

    for (int i = 0; i < n; i++) {
        cin >> x[i];
    }

    int k;
    cin >> k;

    multiset < int > window;

    for (int i = 0; i < k; i++) {
        window.insert(x[i]);
    }

    for (int i = 0; i < n; i++) {
        cout << * window.rbegin() << " ";

        window.erase(window.find(x[i]));
        if (i + k >= n) {
            break;
        }
        window.insert(x[i + k]);
    }
    cout << endl;

    return 0;
}