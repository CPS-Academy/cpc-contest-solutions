#include<bits/stdc++.h>

using namespace std;
#define ll long long
int main() {
    double x;
    printf("Please enter any number: \n");
    cin >> x;
    if (x < 0) {
        printf("Accept positive number only!\n");
        return 0;
    }
    double hi = x, lo = 0, mid;
    int n = 500;
    while (n--) {
        mid = (hi + lo) / 2;
        if (mid * mid > x) {
            hi = mid;
        } else {
            lo = mid;
        }
    }
    printf("Square root of %.6lf is %.6lf\n", x, mid);
}