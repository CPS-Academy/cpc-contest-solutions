#include <bits/stdc++.h>
using namespace std;

int main () {
    int T;
    scanf("%d", &T);
    while (T--) {
        int n, m;
        char strX[801], strS[26];
        scanf("%d%d%s%s", &n, &m, strX, strS);
        int ans = -1;
        for (int operation = 0; operation <= 5; operation++) {
            // match
            bool isSubstring = false;
            for (int i = 0; i + m <= n; i++) {
                bool matched = true;
                for (int j = 0; j < m; j++) {
                    if (strX[i + j] != strS[j]) matched = false;
                }
                if (matched == true) isSubstring = true;
            }
            if (isSubstring == true) {
                ans = operation;
                break;
            }
            if (operation == 5) break;
            for (int i = 0; i < n; i++) {
                strX[n + i] = strX[i];
            }
            n = n * 2;
            strX[n] = '\0';
        }
        printf("%d\n", ans);
    }
    return 0;
}
