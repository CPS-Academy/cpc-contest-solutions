#include <stdio.h>

#include<string.h>

#include<ctype.h>

int main() {
    char s[1005];
    scanf("%s", s);
    int n = strlen(s), t = 0;
    for (int i = 0; i < n; i++) {
        if (i % 2 == 0) {
            int tmp = islower(s[i]);
            if (tmp != 0) t++;
        } else {
            int tmp = isupper(s[i]);
            if (tmp != 0) t++;
        }
    }
    if (t == n) printf("Yes\n");
    else printf("No\n");
}
