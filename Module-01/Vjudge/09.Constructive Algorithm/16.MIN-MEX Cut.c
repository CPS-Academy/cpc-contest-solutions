#include<stdio.h>

#include<string.h>

int main() {
    char s[100005];
    int t;
    scanf("%d", & t);
    while (t--) {
        scanf("%s", s);
        int n = strlen(s), i;
        // printf("---%d\n",n);
        for (i = 0; i < n; i++) {
            if (s[i] == '0') break;
        }
        if (i == n) {
            printf("0\n");
            continue;
        }
        for (; i < n; i++) {
            if (s[i] == '1') break;
        }
        for (; i < n; i++) {
            if (s[i] == '0') break;
        }
        if (i == n) printf("1\n");
        else printf("2\n");
    }
}
