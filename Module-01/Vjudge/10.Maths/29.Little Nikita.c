#include<stdio.h>

int main() {
    int t;
    scanf("%d", & t);
    while (t--) {
        int n, m;
        scanf("%d%d", & n, & m);
        if (m > n) printf("NO\n");
        else if (n % 2 != m % 2) printf("NO\n");
        else printf("YES\n");
    }
}
