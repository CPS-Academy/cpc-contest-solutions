#include<bits/stdc++.h>

using namespace std;
int a[101];
int dp[1000001];
int fun(int x, int n) {
    if (x < 0) return 0;
    if (x == 0) return 1;
    if (dp[x] != -1) return dp[x];
    long long sum = 0;
    for (int i = 0; i < n; i++) {
        sum += fun(x - a[i], n);
        sum %= 1000000007;
    }
    dp[x] = sum;
    return sum;
}
int main() {
    int n, x;
    cin >> n >> x;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    memset(dp, -1, sizeof dp);
    cout << fun(x, n);
    return 0;
}