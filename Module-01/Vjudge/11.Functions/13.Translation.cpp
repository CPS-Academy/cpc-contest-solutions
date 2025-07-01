#include<bits/stdc++.h>

using namespace std;
int main() {
    char s1[105], s2[105];
    scanf("%s", s1);
    scanf("%s", s2);
    int n = strlen(s2);
    reverse(s2, s2 + n);
    if (strcmp(s1, s2) == 0) printf("YES\n");
    else printf("NO\n");
}
