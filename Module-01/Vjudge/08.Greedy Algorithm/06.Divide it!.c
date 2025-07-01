#include <stdio.h>

int main() {
    int t;
    scanf("%d", & t);
    while (t--) {
        long long n;
        int ans = 0;
        scanf("%lld", & n);
        while (n != 1) {
            if (n % 2 == 0) {
                n /= 2;
            } else if (n % 3 == 0) {
                n /= 3;
                n *= 2;
            } else if (n % 5 == 0) {
                n /= 5;
                n *= 4;
            } else {
                ans = -1;
                break;
            }
            ans++;
        }
        printf("%d\n", ans);
    }
}
