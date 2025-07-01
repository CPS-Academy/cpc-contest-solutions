#include <stdio.h>

int main() {
    int n;
    scanf("%d", & n);
    char s[n + 10];
    scanf("%s", s);
    int ones = 0, zeros = 0;
    for (int i = 0; i < n; i++) {
        if (s[i] == '1') ones++;
        else zeros++;
    }
    int ans = ones - zeros;
    if (ans < 0) ans = -ans;
    printf("%d\n", ans);
}
