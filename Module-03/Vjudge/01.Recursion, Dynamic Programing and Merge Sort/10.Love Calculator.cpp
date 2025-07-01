#include<bits/stdc++.h>

using namespace std;
string a, b;
int lcs[35][35];
long long way[35][35];
int TestCase = 1;
int get_lcs(int i, int j) {
    if (i == 0 or j == 0) {
        way[i][j] = 1;
        return 0;
    }
    if (lcs[i][j] != -1) return lcs[i][j];
    int left = get_lcs(i, j - 1);
    int up = get_lcs(i - 1, j);
    int corner = get_lcs(i - 1, j - 1);
    int ans;
    if (a[i] == b[j]) {
        ans = corner + 1;
        way[i][j] = way[i - 1][j - 1];
    } else {
        if (left == up) {
            ans = left;
            way[i][j] = way[i - 1][j] + way[i][j - 1];
        } else if (left > up) {
            ans = left;
            way[i][j] = way[i][j - 1];
        } else {
            ans = up;
            way[i][j] = way[i - 1][j];
        }
    }
    lcs[i][j] = ans;
    return ans;
}
int main() {
    int t;
    cin >> t;
    while (t--) {
        cin >> a >> b;
        int n = a.size(), m = b.size();
        a = '#' + a;
        b = '*' + b;
        for (int i = 0; i <= n; i++) {
            for (int j = 0; j <= m; j++) lcs[i][j] = -1;
        }
        int c_len = n + m - get_lcs(n, m);
        cout << "Case " << TestCase++ << ": ";
        cout << c_len << ' ' << way[n][m] << '\n';
    }
    return 0;
}