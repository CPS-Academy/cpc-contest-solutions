#include<stdio.h>

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
        int ok0 = 1;
        for (int i = 0; i < n; i++) {
            if (a[i] != i + 1) ok0 = 0;
        }
        if (ok0) printf("0\n");
        else if (a[0] == 1 || a[n - 1] == n) printf("1\n");
        else if (a[0] == n && a[n - 1] == 1) printf("3\n");
        else printf("2\n");
    }
}
