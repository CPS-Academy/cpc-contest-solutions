#include <bits/stdc++.h>
using namespace std;

int main () {
    int T;
    scanf("%d", &T);
    while (T--) {
        char str[4];
        scanf("%s", str);
        if (strcmp(str, "bca") == false) printf("NO\n");
        else if (strcmp(str, "cab") == false) printf("NO\n");
        else printf("YES\n");
    }
}
