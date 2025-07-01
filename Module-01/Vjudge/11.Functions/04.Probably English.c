#include <stdio.h>

#include<string.h>

int main() {
    char * words[] = {
        "and",
        "not",
        "that",
        "the",
        "you"
    };
    int n;
    scanf("%d", & n);
    char given[55];
    int flag = 0;
    while (n--) {
        scanf("%s", given);
        for (int i = 0; i < 5; i++) {
            int tmp = strcmp(given, words[i]);
            if (tmp == 0) flag = 1;
        }
    }
    if (flag) printf("Yes\n");
    else printf("No\n");
}
