#include <bits/stdc++.h>
using namespace std;

int main () {
    int T;
    scanf("%d", &T);
    while (T--) {
        int n;
        scanf("%d", &n);
        bool gotAns = false;
        for (char f = 'a'; f <= 'z'; f++) {
            for (char s = 'a'; s <= 'z'; s++) {
                for (char t = 'a'; t <= 'z'; t++) {
                    int fv = f - 'a' + 1;
                    int sv = s - 'a' + 1;
                    int tv = t - 'a' + 1;
                    if (fv + sv + tv == n) {
                        gotAns = true;
                        printf("%c%c%c\n", f, s, t);
                        break;
                    }
                }
                if (gotAns) break;
            }
            if (gotAns) break;
        }
    }
    return 0;
}
