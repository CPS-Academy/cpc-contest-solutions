#include <bits/stdc++.h>
using namespace std;

int main () {
    long long n;
    scanf("%lld", &n);
    while (true) {
        if (n % 2 == 0) n = n / 2;
        else break;
    }
    while (true) {
        if (n % 3 == 0) n = n / 3;
        else break;
    }
    if (n == 1) printf("Yes\n");
    else printf("No\n");
    return 0;
}
