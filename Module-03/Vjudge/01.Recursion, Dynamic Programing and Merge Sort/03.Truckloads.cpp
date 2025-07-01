#include<bits/stdc++.h>

using namespace std;
map < int, int > vis, str;
int cal(int box, int lim) {
    if (box <= lim) return 1;
    if (vis[box] == 1) return str[box];
    int ans = 0;
    int left = box / 2;
    int right = box - left;
    ans += cal(left, lim);
    ans += cal(right, lim);
    vis[box] = 1;
    str[box] = ans;
    return ans;
}
signed main() {
    int box, lim;
    while (cin >> box >> lim) {
        int ans = cal(box, lim);
        cout << ans << endl;
        vis.clear();
    }
    return 0;
}