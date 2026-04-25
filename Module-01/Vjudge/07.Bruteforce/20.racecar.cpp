#include <bits/stdc++.h>
using namespace std;

int main () {
    int n;
    scanf("%d", &n);
    char str[n][51];
    for (int i = 0; i < n; i++) {
        scanf("%s", str[i]);
    }
    bool isOk = false;
    for (int f = 0; f < n; f++) {
        for (int s = 0; s < n; s++) {
            if (f == s) continue;
            char newStr[101];
            for (int i = 0; i < strlen(str[f]); i++) {
                newStr[i] = str[f][i];
            }
            for (int i = 0; i < strlen(str[s]); i++) {
                newStr[strlen(str[f]) + i] = str[s][i];
            }
            newStr[strlen(str[f]) + strlen(str[s])] = '\0';
            bool isPalindrome = true;
            for (int firstId = 0, lastId = strlen(newStr) - 1; firstId < lastId; firstId++, lastId--) {
                if (newStr[firstId] != newStr[lastId]) isPalindrome = false;
            }
            if (isPalindrome) isOk = true;
        }
    }
    if (isOk) printf("Yes\n");
    else printf("No\n");
    return 0;
}
