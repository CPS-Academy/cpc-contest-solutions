#include <stdio.h>

int main() {
    // your code goes here
    int t;
    scanf("%d", & t);
    while (t--) {
        int n;
        scanf("%d", & n);
        for (int i = n; i > 0; i--) {
            printf("%d ", i);
        }
        printf("\n");
    }
}
