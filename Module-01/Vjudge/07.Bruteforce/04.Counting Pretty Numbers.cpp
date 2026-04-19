#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    scanf("%d", &T);
    while (T--) {
        int l, r;
        scanf("%d%d", &l, &r);
        int cnt = 0;
        for (int i = l; i <= r; i++) {
            if (i % 10 == 2 || i % 10 == 3 || i % 10 == 9) {
                cnt++;
            }
        }
        printf("%d\n", cnt);
    }
}
