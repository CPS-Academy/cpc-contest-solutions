#include<stdio.h>

int main() {

    int r1, r2, d1, d2;
    scanf("%d%d", & r1, & r2);
    scanf("%d%d", & d1, & d2);

    if (r1 + d1 > r2 + d2) {
        printf("Dominater\n");
    } else {
        printf("Everule\n");
    }

    return 0;
}