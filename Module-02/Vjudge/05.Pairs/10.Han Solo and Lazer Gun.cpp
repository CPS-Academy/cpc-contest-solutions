#include<bits/stdc++.h>

using namespace std;
int main() {
    int n, x0, y0;
    cin >> n >> x0 >> y0;
    set < pair < int, int >> st;
    for (int i = 0; i < n; i++) {
        int x, y;
        cin >> x >> y;
        x -= x0;
        y -= y0;
        int g = __gcd(x, y);
        st.insert({
            y / g,
            x / g
        });
    }
    cout << st.size() << '\n';
}
