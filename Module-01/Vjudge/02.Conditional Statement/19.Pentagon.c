#include<stdio.h>

int main() {

    char s1, s2, t1, t2, temp;
    scanf("%c%c%c%c%c", & s1, & s2, & temp, & t1, & t2);

    int diff1 = abs(s1 - s2);
    if (diff1 > 2) diff1 = 5 - diff1;

    int diff2 = abs(t1 - t2);
    if (diff2 > 2) diff2 = 5 - diff2;

    if (diff1 == diff2) printf("Yes\n");
    else printf("No\n");

    return 0;
}