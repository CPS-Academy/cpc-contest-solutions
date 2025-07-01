#include<stdio.h>

int main() {
    int n;
    scanf("%d", & n);
    for (int i = 0; i < n; i++) {
        int t = (i % 4);
        if (t < 2) printf("a");
        else printf("b");
    }
    printf("\n");
}