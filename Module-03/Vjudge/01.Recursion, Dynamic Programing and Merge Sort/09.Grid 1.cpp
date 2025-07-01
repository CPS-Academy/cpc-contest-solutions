#include<bits/stdc++.h>

using namespace std;
int n, m, ans = 0;
#define int long long
char mat[1000][1000];
int vis[1000][1000], str[1000][1000];
int fun(int i, int j) {
    if (i == n - 1 and j == m - 1) return 1;
    if (i == n or j == m) return 0;
    if (mat[i][j] == '#') return 0;
    if (vis[i][j] == 1) return str[i][j];
    long long ans = 0;
    ans += fun(i, j + 1);
    ans += fun(i + 1, j);
    ans %= 1000000007;
    vis[i][j] = 1;
    str[i][j] = ans;
    return ans;
}
signed main() {
    cin >> n >> m;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) cin >> mat[i][j];
    }
    memset(vis, 0, sizeof vis);
    cout << fun(0, 0);
    return 0;
}