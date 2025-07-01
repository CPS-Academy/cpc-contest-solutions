#include<stdio.h>

char s[15];
int solve(int n) {
    int tmp = 0;
    for (int i = 0; i < n; i++) {
        scanf("%s", s);
        if (s[0] == 'F') tmp++;
        else tmp--;
    }
    return tmp;
}
int main() {
    int n;
    scanf("%d", & n);
    int cnt = solve(n);
    if (cnt > 0) printf("Yes\n");
    else printf("No\n");
}
