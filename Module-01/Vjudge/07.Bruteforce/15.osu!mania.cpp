#include <bits/stdc++.h>
using namespace std;

int main () {
    int T;
    scanf("%d", &T);
    while (T--) {
        int n;
        scanf("%d", &n);
        char notes[n][5];
        for (int i = 0; i < n; i++) {
            scanf("%s", &notes[i]);
        }
        for (int row = n - 1; row >= 0; row--) {
            for (int col = 0; col < 4; col++) {
                if (notes[row][col] == '#') {
                    printf("%d ", col + 1);
                }
            }
        }
        printf("\n");
    }
}
