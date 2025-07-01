#include<bits/stdc++.h>

using namespace std;
int main() {
    int n, m;
    cin >> n >> m;
    map < string, string > mp;
    for (int i = 0; i < n; i++) {
        string a, b;
        cin >> a >> b;
        b += ";";
        mp[b] = a;
    }
    while (m--) {
        string name, ip;
        cin >> name >> ip;
        cout << name << " " << ip << " #" << mp[ip] << '\n';
    }
}
