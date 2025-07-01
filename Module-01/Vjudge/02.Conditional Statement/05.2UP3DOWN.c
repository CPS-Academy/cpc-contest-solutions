#include<stdio.h>


int main() {

    int x, y;
    scanf("%d%d", & x, & y);

    if (x < y) {
        if (y - x <= 2) {
            printf("Yes\n");
        } else {
            printf("No\n");
        }
    } else {
        if (x - y <= 3) {
            printf("Yes\n");
        } else {
            printf("No\n");
        }
    }

    return 0;
}