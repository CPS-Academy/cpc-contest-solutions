#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        priority_queue < int > q;
        while (n--) {
            int x;
            cin >> x;
            q.push(x);
        }
        while (q.size()) {
            int x = q.top();
            cout << x << " ";
            q.pop();
            x /= 2;
            if (x) q.push(x);
        }
        cout << '\n';
    }
}