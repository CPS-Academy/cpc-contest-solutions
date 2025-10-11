#include <bits/stdc++.h>

using namespace std;
int main() {
    int n, k;
    cin >> n >> k;
    priority_queue < int, vector < int > , greater < int >> q;
    while (k--) {
        n--;
        int x;
        cin >> x;
        q.push(x);
    }
    cout << q.top() << '\n';
    while (n--) {
        int x;
        cin >> x;
        q.push(x);
        q.pop();
        cout << q.top() << '\n';
    }
}