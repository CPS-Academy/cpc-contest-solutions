#include <stdio.h>

#include<math.h>

int main() {
    int n, x, t;
    scanf("%d%d%d", & n, & x, & t);
    float tmp = n;
    int ans = ceil(tmp / x);
    ans *= t;
    printf("%d\n", ans);
}
