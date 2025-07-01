#include<bits/stdc++.h>

using namespace std;
int main() {
    int t;
    scanf("%d", & t);
    while (t--) {
        int n;
        scanf("%d", & n);
        int a[n];
        for (int i = 0; i < n; i++) {
            scanf("%d", & a[i]);
        }
        int sum = accumulate(a, a + n, 0);
        int mn = * min_element(a, a + n);
        printf("%d\n", sum - mn);
    }
}
