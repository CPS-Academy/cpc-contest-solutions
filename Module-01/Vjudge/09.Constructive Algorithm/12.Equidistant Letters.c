#include <stdio.h>

int main() {
    int t;
    scanf("%d", & t);
    while (t--) {
        char s[55];
        scanf("%s", s);
        int a[26] = {
            0
        };
        for (int i = 0; s[i] != '\0'; i++) {
            a[s[i] - 'a']++;
        }
        for (int i = 0; i < 26; i++) {
            for (int j = 0; j < a[i]; j++) {
                printf("%c", 'a' + i);
            }
        }
        printf("\n");
    }
}
