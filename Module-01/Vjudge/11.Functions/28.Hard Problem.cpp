#include<bits/stdc++.h>

using namespace std;
int main() {
    int t;
    scanf("%d", & t);
    while (t--) {
        int m, a, b, c;
        scanf("%d%d%d%d", & m, & a, & b, & c);
        int ans = 0, left = 0;
        int tmp = min(m, a);
        ans += tmp;
        left += m - tmp;
        tmp = min(m, b);
        ans += tmp;
        left += m - tmp;
        ans += min(left, c);
        printf("%d\n", ans);
    }
}
