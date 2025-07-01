#include<bits/stdc++.h>

using namespace std;
#define ll long long
int cnt[200005];
int main() {
    int n, k, q, l, r;
    cin >> n >> k >> q;
    while (n--) {
        cin >> l >> r;
        cnt[l]++;
        cnt[r + 1]--;
    }
    int i;
    for (i = 1; i < 200005; i++) {
        cnt[i] += cnt[i - 1];
    }
    for (i = 1; i < 200005; i++) {
        if (cnt[i] >= k) cnt[i] = 1;
        else cnt[i] = 0;
    }
    for (i = 1; i < 200005; i++) {
        cnt[i] += cnt[i - 1];
    }
    while (q--) {
        cin >> l >> r;
        cout << cnt[r] - cnt[l - 1] << '\n';
    }
}