#include<bits/stdc++.h>

using namespace std;
int main() {
    int n, m;
    scanf("%d%d", & n, & m);
    int a[m], i;
    for (i = 0; i < m; i++) {
        scanf("%d", & a[i]);
    }
    sort(a, a + m);
    int j = n - 1, ans = 100000;
    i = 0;
    for (; j < m; i++, j++) {
        ans = min(a[j] - a[i], ans);
    }
    printf("%d\n", ans);
}
