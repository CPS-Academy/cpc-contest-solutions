#include <bits/stdc++.h>
using namespace std;

int main() {
    // your code goes here
    int T;
    scanf("%d", &T);
    while (T--) {
        int n;
        scanf("%d", &n);
        char dir = 'N';
        for (int tm = 1; tm <= n; tm++) {
            if (dir == 'N') dir = 'E';
            else if (dir == 'E') dir = 'S';
            else if (dir == 'S') dir = 'W';
            else if (dir == 'W') dir = 'N';
        }
        if (dir == 'N') printf("North\n");
        else if (dir == 'E') printf("East\n");
        else if (dir == 'S') printf("South\n");
        else if (dir == 'W') printf("West\n");
    }
}
