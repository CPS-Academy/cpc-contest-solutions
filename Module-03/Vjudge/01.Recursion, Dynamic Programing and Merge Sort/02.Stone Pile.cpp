#include<bits/stdc++.h>

using namespace std;
int n;
int a[20];
int fun(int idx, int left, int right) {
    if (idx == n) return abs(left - right);
    int Left_return = fun(idx + 1, left + a[idx], right);
    int Right_return = fun(idx + 1, left, right + a[idx]);
    return min(Left_return, Right_return);
}
signed main() {
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    cout << fun(0, 0, 0);
    return 0;
}