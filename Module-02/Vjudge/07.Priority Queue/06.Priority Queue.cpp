#include <bits/stdc++.h>

using namespace std;
int main() {
    priority_queue < pair < int, string >> q;
    string cmd;
    map < string, int > mp;
    while (cin >> cmd) {
        if (cmd == "ADD") {
            string id;
            cin >> id;
            int p;
            cin >> p;
            q.push({
                p,
                id
            });
            mp[id] = p;
        } else if (cmd == "CHANGE") {
            string id;
            cin >> id;
            int p;
            cin >> p;
            q.push({
                p,
                id
            });
            mp[id] = p;
        } else {
            while (mp[q.top().second] != q.top().first) {
                q.pop();
            }
            cout << q.top().second << " " << q.top().first << '\n';
            q.pop();
        }
    }
}