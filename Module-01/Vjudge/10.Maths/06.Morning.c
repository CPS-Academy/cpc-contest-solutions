#include<stdio.h>

int main() {
    int t;
    scanf("%d", & t);
    while (t--) {
        char s[10];
        int i;
        scanf("%s", s);
        int ans = 0, last = 1;
        for (i = 0; i < 4; i++) {
            int p;
            if (s[i] == '0') {
                p = 10;
            } else p = s[i] - '0';
            int tmp = p - last;
            if (tmp < 0) tmp = -tmp;
            ans += tmp + 1;
            last = p;
        }
        printf("%d\n", ans);
    }
}
