#include<bits/stdc++.h>

using namespace std;
int dp[501][501];
int fun(int x, int y) {
    if (x == y) return 0;
    if (dp[x][y] > -1) return dp[x][y];
    int ans = 1e9;
    for (int i = 1; i <= x / 2; i++) {
        int left = i;
        int right = x - i;
        int temp = fun(left, y) + fun(right, y) + 1;
        ans = min(ans, temp);
    }
    for (int i = 1; i <= y / 2; i++) {
        int left = i;
        int right = y - i;
        int temp = fun(x, left) + fun(x, right) + 1;
        ans = min(ans, temp);
    }
    dp[x][y] = ans;
    return ans;
}
int main() {
    int x, y;
    cin >> x >> y;
    memset(dp, -1, sizeof dp);
    cout << fun(x, y);
    return 0;
}