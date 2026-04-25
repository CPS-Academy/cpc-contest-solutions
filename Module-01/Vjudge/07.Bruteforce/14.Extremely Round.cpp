#include <bits/stdc++.h>
using namespace std;

int main () {
    int T;
    scanf("%d", &T);
    while (T--) {
        int n;
        scanf("%d", &n);
        int ans = 0;
        for (int firstDigit = 1; firstDigit <= 9; firstDigit++) {
            int num = firstDigit;
            while (num <= n) {
                ans++;
                num = num * 10;
            }
        }
        printf("%d\n", ans);
    }
}
