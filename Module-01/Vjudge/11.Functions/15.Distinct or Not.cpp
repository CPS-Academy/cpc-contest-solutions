#include<bits/stdc++.h>

using namespace std;
int main() {
    int n;
    scanf("%d", & n);
    int a[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", & a[i]);
    }
    sort(a, a + n);
    int flag = 0;
    for (int i = 1; i < n; i++) {
        if (a[i] == a[i - 1]) flag = 1;
    }
    if (flag == 1) printf("NO\n");
    else printf("YES\n");
}
