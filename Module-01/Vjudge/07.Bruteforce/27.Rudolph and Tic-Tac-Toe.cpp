#include <bits/stdc++.h>
using namespace std;

int main () {
    int T;
    scanf("%d", &T);
    while (T--) {
        char grid[3][4];
        for (int i = 0; i < 3; i++) {
            scanf("%s", grid[i]);
        }
        bool gotWinner = false;
        for (int winner = 1; winner <= 3; winner++) {
            char s = '+';
            if (winner == 2) s = 'O';
            else if (winner == 3) s = 'X';
            bool canWin = false;
            for (int row = 0; row < 3; row++) {
                if (grid[row][0] == s && grid[row][1] == s && grid[row][2] == s) canWin = true;
            }
            for (int col = 0; col < 3; col++) {
                if (grid[0][col] == s && grid[1][col] == s && grid[2][col] == s) canWin = true;
            }
            if (grid[0][0] == s && grid[1][1] == s && grid[2][2] == s) canWin = true;
            if (grid[2][0] == s && grid[1][1] == s && grid[0][2] == s) canWin = true;
            if (canWin == true) {
                gotWinner = true;
                printf("%c\n", s);
                break;
            }
        }
        if (gotWinner == false) {
            printf("DRAW\n");
        }
    }
    return 0;
}
