#include <bits/stdc++.h>
using namespace std;

int main () {
    int n;
    char str[101];
    scanf("%d%s", &n, str);
    int maxCount = 0;
    char ans[3];
    ans[2] = '\0';
    for (char c1 = 'A'; c1 <= 'Z'; c1++) {
        for (char c2 = 'A'; c2 <= 'Z'; c2++) {
            int cnt = 0;
            for (int i = 0; i < n - 1; i++) {
                if (str[i] == c1 && str[i + 1] == c2) {
                    cnt++;
                }
            }
            if (maxCount < cnt) {
                ans[0] = c1;
                ans[1] = c2;
                maxCount = cnt;
            }
        }
    }
    printf("%s\n", ans);
    return 0;
}
