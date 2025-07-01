#include<bits/stdc++.h>

using namespace std;
#define ll long long
int main() {
    int k, q;
    cin >> q;
    for (k = 1; k <= q; k++) {
        double ab, ac, bc, r;
        cin >> ab >> ac >> bc >> r;
        double ad, de, ae;
        double hi = ab, lo = 0;
        int n = 500;
        while (n--) {
            ad = (hi + lo) / 2;
            de = (ad / ab) * bc;
            ae = (ad / ab) * ac;
            double s1 = (ad + de + ae) / 2;
            double area1 = sqrt(s1 * (s1 - ad) * (s1 - de) * (s1 - ae));
            double s2 = (ab + bc + ac) / 2;
            double area2 = sqrt(s2 * (s2 - ab) * (s2 - bc) * (s2 - ac));
            if (area1 / (area2 - area1) > r) hi = ad;
            else lo = ad;
        }
        cout << "Case " << k << ": " << fixed << setprecision(9) << ad << '\n';
    }
}