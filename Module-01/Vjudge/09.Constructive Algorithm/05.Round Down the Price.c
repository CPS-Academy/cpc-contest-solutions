#include <stdio.h>

int main() {
    int t;
    scanf("%d", & t);
    while (t--) {
        int m;
        scanf("%d", & m);
        int k = 1;
        int tmp = m;
        tmp /= 10;
        while (tmp) {
            tmp /= 10;
            k *= 10;
        }
        printf("%d\n", m - k);
    }
}
