#include<bits/stdc++.h>

using namespace std;
int main() {
    int t;
    scanf("%d", & t);
    while (t--) {
        char s[105];
        scanf("%s", s);
        int n = strlen(s);
        reverse(s, s + n);
        for (int i = 0; i < n; i++) {
            char c;
            if (s[i] == 'p') c = 'q';
            else if (s[i] == 'q') c = 'p';
            else c = 'w';
            printf("%c", c);
        }
        printf("\n");
    }
}
