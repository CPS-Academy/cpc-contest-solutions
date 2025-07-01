#include <stdio.h>

#include<math.h>

int main() {
    int h, a;
    scanf("%d%d", & h, & a);
    float tmp = h;
    int ans = ceil(tmp / a);
    printf("%d\n", ans);
}
