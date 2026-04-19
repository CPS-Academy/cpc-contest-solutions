#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    scanf("%d", &T);
    while (T--) {
        int k;
        scanf("%d", &k);
        int pos = 0;
        for (int tm = 1; tm <= k; tm++) {
            if (tm % 2 == 1) pos += 3;
            else pos--;
        }
        printf("%d\n", pos);
    }
    return 0;
}
