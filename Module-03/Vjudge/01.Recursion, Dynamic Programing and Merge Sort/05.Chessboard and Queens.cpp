#include<bits/stdc++.h>

using namespace std;
char mat[8][8];
int col[8];
int ld[30], rd[30];
int ans = 0;

void fun(int r) {
    if (r >= 8) {
        ans++;
        return;
    }
    for (int c = 0; c < 8; c++) {
        if (mat[r][c] == '*') continue;
        if (col[c] == 1) continue;
        if (ld[r - c + 7] == 1) continue;
        if (rd[r + c] == 1) continue;
        col[c] = 1;
        ld[r - c + 7] = 1;
        rd[r + c] = 1;
        fun(r + 1);
        col[c] = 0;
        ld[r - c + 7] = 0;
        rd[r + c] = 0;
    }
}

signed main() {
    for (int i = 0; i < 8; i++) {
        for (int j = 0; j < 8; j++) cin >> mat[i][j];
    }
    fun(0);
    cout << ans;
    return 0;
}