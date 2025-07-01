#include<bits/stdc++.h>

using namespace std;
bool cmp(pair < int, int > a, pair < int, int > b) {
    if (a.first != b.first) return a.first < b.first;
    return a.second > b.second;
}
int main() {
    int t;
    scanf("%d", & t);
    while (t--) {
        int n;
        scanf("%d", & n);
        vector < pair < int, int >> p;
        for (int i = 0; i < n; i++) {
            int x, y;
            scanf("%d%d", & x, & y);
            p.push_back({
                x,
                y
            });
        }
        sort(p.begin(), p.end(), cmp);
        for (auto[x, y]: p) {
            printf("%d %d\n", x, y);
        }
    }
}
