#include <bits/stdc++.h>
using namespace std;

int main () {
    int T;
    scanf("%d", &T);
    while (T--) {
        int ara[5] = {0};
        scanf("%d%d%d%d", &ara[0], &ara[1], &ara[3], &ara[4]);
        int ans = 0;
        for (int val = -100; val <= 100; val++) {
            int score = 0;
            ara[2] = val;
            for (int i = 2; i < 5; i++) {
                if (ara[i] == ara[i - 1] + ara[i - 2]) score++;
            }
            ans = max(ans, score);
        }
        printf("%d\n", ans);
    }
    return 0;
}
