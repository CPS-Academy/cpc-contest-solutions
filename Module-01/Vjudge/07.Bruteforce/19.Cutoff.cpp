#include <bits/stdc++.h>
using namespace std;

int main () {
    int n, x;
    scanf("%d%d", &n, &x);
    int ara[n];
    for (int i = 0; i < n - 1; i++) {
        scanf("%d", &ara[i]);
    }
    for (ara[n - 1] = 0; ara[n - 1] <= 100; ara[n - 1]++) {
        int sum = 0;
        for (int i = 0; i < n; i++) {
            sum += ara[i];
        }
        int minNum = 101, maxNum = 0;
        for (int i = 0; i < n; i++) {
            minNum = min(ara[i], minNum);
            maxNum = max(ara[i], maxNum);
        }
        sum = sum - minNum - maxNum;
        if (sum >= x) {
            break;
        }
    }
    // printf("%d\n", ara[n - 1]);
    if (ara[n - 1] > 100) printf("-1\n");
    else printf("%d\n", ara[n - 1]);
    return 0;
}
