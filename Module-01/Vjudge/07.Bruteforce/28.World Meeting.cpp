#include <bits/stdc++.h>
using namespace std;

int main () {
    int n;
    scanf("%d", &n);
    int people[1001], tm[1001];
    for (int i = 0; i < n; i++) {
        scanf("%d%d", &people[i], &tm[i]);
    }
    int ans = 0;
    for (int m_time = 0; m_time < 24; m_time++) {
        int total = 0;
        for (int base = 0; base < n; base++) {
            int cur_time = m_time + tm[base];
            if (cur_time >= 24) cur_time -= 24;
            if (cur_time >= 9 && cur_time < 18) {
                total += people[base];
            }
        }
        ans = max(ans, total);
    }
    printf("%d\n", ans);
    return 0;
}
