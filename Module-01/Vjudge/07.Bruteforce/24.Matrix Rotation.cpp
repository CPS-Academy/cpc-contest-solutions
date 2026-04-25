#include <bits/stdc++.h>
using namespace std;

int main () {
    int T;
    scanf("%d", &T);
    while (T--) {
        int mat[2][2];
        for (int i = 0; i < 2; i++) {
            for (int j = 0; j < 2; j++)
                scanf("%d", &mat[i][j]);
        }
        int rotate = 4;
        bool isBeautiful = false;
        while (rotate--) {
            if (mat[0][0] < mat[0][1] && mat[1][0] < mat[1][1] && mat[0][0] < mat[1][0] && mat[0][1] < mat[1][1]) {
                isBeautiful = true;
            }
            int tmp = mat[0][1], tmp1 = mat[1][1];
            mat[0][1] = mat[0][0];
            mat[1][1] = tmp;
            tmp = mat[1][0];
            mat[1][0] = tmp1;
            mat[0][0] = tmp;
        }
        if (isBeautiful) printf("YES\n");
        else printf("NO\n");
    }
    return 0;
}
