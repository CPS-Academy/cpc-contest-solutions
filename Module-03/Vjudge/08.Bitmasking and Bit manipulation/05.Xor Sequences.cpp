#include<bits/stdc++.h>

using namespace std;
int main() {
    int q;
    cin >> q;
    while (q--) {
        int x, y;
        cin >> x >> y;
        int t = 1;
        while (x || y) {
            if (x % 2 != y % 2) {
                break;
            }
            t *= 2;
            x /= 2;
            y /= 2;
        }
        cout << t << '\n';
    }
}