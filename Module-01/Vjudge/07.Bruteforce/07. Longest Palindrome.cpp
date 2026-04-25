#include<stdio.h>
int main(){
   //Solution not updated yet
}
#include <bits/stdc++.h>
using namespace std;

int main () {
    char str[101];
    scanf("%s", &str);
    int n = strlen(str);
    int ans = 0;
    for (int leftErase = 0; leftErase <= n; leftErase++) {
        for (int rightErase = 0; rightErase <= n; rightErase++) {
            if (leftErase + rightErase > n) continue;
            int f = leftErase;
            int l = n - rightErase - 1;
            bool isPalindrome = true;
            for (int x = 0; f + x <= l - x; x++) {
                if (str[f + x] != str[l - x]) isPalindrome = false;
            }
            if (isPalindrome) {
                ans = max(ans, l - f + 1);
            }
        }
    }
    printf("%d\n", ans);
}
