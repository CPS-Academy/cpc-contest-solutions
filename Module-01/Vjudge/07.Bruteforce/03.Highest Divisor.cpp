#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    scanf("%d", &n);
    int ans = 1;
    for (int i = 2; i <= 10; i++) {
        if (n % i == 0) {
            ans = i;
        }
    }
    printf("%d\n", ans);
    return 0;
}
