#include <bits/stdc++.h>
using namespace std;

int main () {
    int T;
    scanf("%d", &T);
    while (T--) {
        int d, x, y, z;
        scanf("%d%d%d%d", &d, &x, &y, &z);
        int firstCase = 7 * x;
        int secondCase = d * y + (7 - d) * z;
        int ans = max(firstCase, secondCase);
        printf("%d\n", ans);
    }
    return 0;
}
