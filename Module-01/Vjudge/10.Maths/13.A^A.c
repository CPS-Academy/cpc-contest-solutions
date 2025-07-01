#include<stdio.h>

int main() {
    long long b;
    scanf("%lld", & b);
    long long a, ans = -1;
    for (a = 1; a < 20; a++) {
        long long tmp = 1;
        for (int i = 0; i < a; i++) {
            tmp = tmp * a;
        }
        if (tmp == b) {
            ans = a;
            break;
        }
        if (tmp > b) {
            break;
        }
    }
    printf("%d\n", ans);
}
