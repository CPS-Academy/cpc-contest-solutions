#include <stdio.h>

int compare_with_10(int x) {
    if (x <= 10) return 1;
    return 0;
}
int main() {
    int t;
    scanf("%d", & t);
    while (t--) {
        int x;
        scanf("%d", & x);
        if (compare_with_10(x)) printf("Yes\n");
        else printf("No\n");
    }
}
