#include<bits/stdc++.h>

using namespace std;
#define ll long long
#define I ios::sync_with_stdio(false); cin.tie(0)
double pi = acos(-1.0);
double deg_to_redi(double x) {
    return pi * x / 180.0;
}
int main() {
    int q;
    cin >> q;
    while (q--) {
        double peri;
        cin >> peri;
        double len = peri / 3;
        double sqrt_of_3 = sqrt(3.0);
        double area1 = sqrt_of_3 * len * len / 4;
        double hi = len, lo = 0, mid;
        int n = 100;
        while (n--) {
            mid = (hi + lo) / 2;
            double y = tan(deg_to_redi(120.0)) * mid / 2 + sqrt_of_3 * len / 2;
            if (y < mid) {
                hi = mid;
            } else {
                lo = mid;
            }
        }
        double area2 = pi * (mid / 2) * (mid / 2);
        cout << setprecision(12) << fixed << area1 - area2 << '\n';
    }
}