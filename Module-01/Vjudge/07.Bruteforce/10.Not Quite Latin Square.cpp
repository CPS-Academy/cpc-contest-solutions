#include <bits/stdc++.h>
using namespace std;

int main () {
    int T;
    scanf("%d", &T);
    while (T--) {
        char grid[3][4];
        for (int row = 0; row < 3; row++) {
            scanf("%s", grid[row]);
        }
        int qmarkRow = 0;
        for (int row = 0; row < 3; row++) {
            for (int col = 0; col < 3; col++) {
                if (grid[row][col] == '?') qmarkRow = row;
            }
        }
        for (char ch = 'A'; ch <= 'C'; ch++) {
            bool isBad = false;
            for (int col = 0; col < 3; col++) {
                if (grid[qmarkRow][col] == ch) {
                    isBad = true;
                }
            }
            if (!isBad) printf("%c\n", ch);
        }
    }
    return 0;
}
