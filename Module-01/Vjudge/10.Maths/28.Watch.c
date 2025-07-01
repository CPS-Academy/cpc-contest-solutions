#include<stdio.h>

int main() {
    int tt;
    scanf("%d", & tt);
    int ss = tt % 60;
    tt /= 60;
    int mm = tt % 60;
    int hh = tt / 60;
    printf("%d:%d:%d\n", hh, mm, ss);
}
