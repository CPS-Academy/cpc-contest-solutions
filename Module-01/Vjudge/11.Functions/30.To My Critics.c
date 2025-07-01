#include<stdio.h>

int c10(int x, int y) {
    if (x + y >= 10) return 1;
    return 0;
}
int main() {
    int t;
    scanf("%d", & t);
    while (t--) {
        int a, b, c;
        scanf("%d%d%d", & a, & b, & c);
        if (c10(a, b) || c10(a, c) || c10(b, c)) printf("YES\n");
        else printf("NO\n");
    }
}
