#include <bits/stdc++.h>
using namespace std;

int main() {
    // your code goes here
    int T;
    scanf("%d", &T);
    while (T--) {
        int a, b, c;
        scanf("%d%d%d", &a, &b, &c);
        bool left = false, right = false;
        if (a == 0 || b == 0 || c == 0) {
            left = true;
        }
        if (a == 1 || b == 1 || c == 1) {
            right = true;
        }
        if (left && right) {
            printf("1\n");
        }
        else printf("0\n");
    }
}
