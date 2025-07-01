#include <stdio.h>

#include<string.h>

#include<ctype.h>

int main() {
    char s[105];
    scanf("%s", s);
    int n = strlen(s);
    for (int i = 0; i < n; i++) {
        s[i] = toupper(s[i]);
    }
    printf("%s\n", s);
}
