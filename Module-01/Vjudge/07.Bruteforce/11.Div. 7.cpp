#include <bits/stdc++.h>
using namespace std;

int main () {
    int T;
    scanf("%d", &T);
    while (T--) {
        int n;
        scanf("%d", &n);
        if (n < 10) printf("7\n");
        else if (n % 7 == 0) printf("%d\n", n);
        else {
            n = n / 10;
            n = n * 10;
            for (int i = n; i < n + 10; i++) {
                if (i % 7 == 0) {
                    printf("%d\n", i);
                    break;
                }
            }
        }
    }
    return 0;
}
