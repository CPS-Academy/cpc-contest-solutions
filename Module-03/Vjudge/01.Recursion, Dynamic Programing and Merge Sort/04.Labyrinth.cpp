#include<bits/stdc++.h>

using namespace std;
int dx[] = {
    0,
    0,
    1,
    -1
};
int dy[] = {
    1,
    -1,
    0,
    0
};
int dir[1001][1001];
string getPath(int x, int y, int Ax, int Ay) {
    if (x == Ax and y == Ay) return "";
    if (dir[x][y] == 0) {
        string path = getPath(x, y - 1, Ax, Ay);
        path.push_back('R');
        return path;
    }
    if (dir[x][y] == 1) {
        string path = getPath(x, y + 1, Ax, Ay);
        path.push_back('L');
        return path;
    }
    if (dir[x][y] == 2) {
        string path = getPath(x - 1, y, Ax, Ay);
        path.push_back('D');
        return path;
    }
    if (dir[x][y] == 3) {
        string path = getPath(x + 1, y, Ax, Ay);
        path.push_back('U');
        return path;
    }
}
signed main() {
    int n, m;
    cin >> n >> m;
    char mat[n][m];
    pair < int, int > A, B;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> mat[i][j];
            if (mat[i][j] == 'A') A = {
                i,
                j
            };
            if (mat[i][j] == 'B') B = {
                i,
                j
            };
        }
    }
    int vis[n][m], cost[n][m];
    memset(vis, 0, sizeof vis);
    queue < pair < int, int >> q;
    q.push(A);
    vis[A.first][A.second] = 1;
    cost[A.first][A.second] = 0;
    while (q.size() > 0) {
        pair < int, int > f = q.front();
        int x = f.first, y = f.second;
        q.pop();
        for (int i = 0; i < 4; i++) {
            int _x = x + dx[i];
            int _y = y + dy[i];
            if (_x < 0 or _x >= n or _y < 0 or _y >= m) continue;
            if (vis[_x][_y] == 1 or mat[_x][_y] == '#') continue;
            vis[_x][_y] = 1;
            cost[_x][_y] = cost[x][y] + 1;
            q.push({
                _x,
                _y
            });
            dir[_x][_y] = i;
        }
    }
    if (vis[B.first][B.second] == 0) {
        cout << "NO\n";
    } else {
        cout << "YES\n" << cost[B.first][B.second] << '\n';
        cout << getPath(B.first, B.second, A.first, A.second);
    }
    return 0;
}