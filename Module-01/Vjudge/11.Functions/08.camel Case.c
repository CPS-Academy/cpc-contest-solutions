#include <stdio.h>

#include<ctype.h>

int main() {
    char s[105];
    scanf("%s", s);
    int i;
    for (i = 0;; i++) {
        if (isupper(s[i])) break;
    }
    printf("%d\n", i + 1);
}
