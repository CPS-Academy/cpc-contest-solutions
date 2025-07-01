#include<stdio.h>

int a[10005];
int amazing(int k) {
    int mn = a[0];
    int mx = a[0];
    for (int i = 1; i < k; i++) {
        if (mn > a[i]) mn = a[i];
        if (mx < a[i]) mx = a[i];
    }
    if (a[k] < mn || a[k] > mx) return 1;
    return 0;
}
int main() {
    int n;
    scanf("%d", & n);
    for (int i = 0; i < n; i++) {
        scanf("%d", & a[i]);
    }
    int ans = 0;
    for (int i = 1; i < n; i++) {
        ans += amazing(i);
    }
    printf("%d\n", ans);
}
