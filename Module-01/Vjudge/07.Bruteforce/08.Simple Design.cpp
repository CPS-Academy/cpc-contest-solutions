#include<stdio.h>
int main(){
   //Solution not updated yet
}
#include <bits/stdc++.h>
using namespace std;

int main () {
    int T;
    scanf("%d", &T);
    while (T--) {
        int x, k;
        scanf("%d%d", &x, &k);
        for (int y = x; ; y++) {
            int sum = 0;
            int val = y;
            while (val > 0) {
                sum = sum + val % 10;
                val = val / 10;
            }
            if (sum % k == 0) {
                printf("%d\n", y);
                break;
            }
        }
    }
    return 0;
}
