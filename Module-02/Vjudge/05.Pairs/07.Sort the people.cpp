#include<bits/stdc++.h>

using namespace std;
int main() {
    int n;
    cin >> n;
    vector < pair < pair < string, string > , int >> a;
    for (int i = 0; i < n; i++) {
        string name, sname;
        int y;
        cin >> name >> sname >> y;
        a.push_back({
            {
                sname,
                name
            },
            -y
        });
    }
    sort(a.begin(), a.end());
    for (auto[p, y]: a) {
        cout << p.second << " " << p.first << " " << -y << '\n';
    }
}
