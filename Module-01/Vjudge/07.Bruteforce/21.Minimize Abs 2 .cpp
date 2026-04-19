#include <bits/stdc++.h>
using namespace std;

int main () {
    long long D;
    scanf("%lld", &D);
    long long ans = D;
    for (long long x = 0, y; x <= sqrt(D) + 1; x++) {
        // case 1 : Negative
        if (x * x <= D) {
            y = sqrt(D - x * x);
            long long newAns = D - (x * x + y * y);
            ans = min(ans, newAns);
        }
        // case 2 : Positive
        if (x * x <= D) {
            y = ceil(sqrt(D - x * x));
        }
        else y = 0;
        long long newAns = x * x + y * y - D;
        ans = min(ans, newAns);
    }
    printf("%lld\n", ans);
    return 0;
}
