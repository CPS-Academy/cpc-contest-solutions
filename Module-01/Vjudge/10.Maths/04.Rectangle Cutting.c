#include<stdio.h>

int main() {
    int t;
    scanf("%d", & t);
    while (t--) {
        int a, b;
        scanf("%d%d", & a, & b);
        if (a > b) {
            int tmp = a;
            a = b;
            b = tmp;
        }
        if (a % 2 == 0) {
            printf("YES\n");
        } else if (b % 2 == 0) {
            if (a + a == b) {
                printf("NO\n");
            } else {
                printf("YES\n");
            }
        } else {
            printf("NO\n");
        }
    }
}
