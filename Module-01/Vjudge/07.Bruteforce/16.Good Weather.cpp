#include <bits/stdc++.h>
using namespace std;

int main () {
    int T;
    scanf("%d", &T);
    while (T--) {
        int sunnyDay = 0, rainyDay = 0;
        for (int i = 0; i < 7; i++) {
            int day;
            scanf("%d", &day);
            if (day == 1) sunnyDay++;
            else rainyDay++;
        }
        if (sunnyDay > rainyDay) printf("YES\n");
        else printf("NO\n");
    }
}
