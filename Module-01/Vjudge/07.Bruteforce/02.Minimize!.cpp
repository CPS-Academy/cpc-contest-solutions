//Bruteforce Approch
#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    scanf("%d", &T);
    while(T--) {
        int a, b;
        scanf("%d%d", &a, &b);
        int result = 1000;
        for(int c = a; c <= b; c++) {
            int newResult = (c - a) + (b - c);
            result = min(result, newResult);
        }
        printf("%d\n", result);
    }

    return 0;
}

//Optimal Approach
#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    scanf("%d", &T);
    while(T--) {
        int a, b;
        scanf("%d%d", &a, &b);
        int result = b - a;
        printf("%d\n", result);
    }

    return 0;
}
