#include <stdio.h>

#include<string.h>

int main() {
    char s[105];
    scanf("%s", s);
    int n = strlen(s);
    for (int i = 0; i < n; i += 2) {
        char tmp = s[i];
        s[i] = s[i + 1];
        s[i + 1] = tmp;
    }
    printf("%s\n", s);
}
