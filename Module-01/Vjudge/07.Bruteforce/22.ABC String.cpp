#include <bits/stdc++.h>
using namespace std;

int main () {
    int T;
    scanf("%d", &T);
    while (T--) {
        char strA[51];
        scanf("%s", &strA);
        int n = strlen(strA);
        bool isOk = false;
        for (int A = 0; A <= 1; A++) {
            for (int B = 0; B <= 1; B++) {
                for (int C = 0; C <= 1; C++) {
                    bool isValid = true;
                    int o = 0, cl = 0;
                    for (int i = 0; i < n; i++) {
                        if (strA[i] == 'A') {
                            if (A == 0) o++;
                            else cl++;
                        }
                        else if (strA[i] == 'B') {
                            if (B == 0) o++;
                            else cl++;
                        }
                        else {
                            if (C == 0) o++;
                            else cl++;
                        }
                        if (o < cl) {
                            isValid = false;
                        }
                    }
                    if (o != cl) isValid = false;
                    if (isValid) {
                        isOk = true;
                    }
                }
            }
        }
        if (isOk) printf("YES\n");
        else printf("NO\n");
    }
    return 0;
}
