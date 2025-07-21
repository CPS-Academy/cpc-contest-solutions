#include<bits/stdc++.h>

using namespace std;
int main() {
    int n;
    cin >> n;
    vector < int > a(n), b(n);
    for (auto & x: a) {
        cin >> x;
    }
    for (auto & x: b) {
        cin >> x;
    }
    int mxa = * max_element(a.begin(), a.end());
    int mxb = * max_element(b.begin(), b.end());
    cout << mxa + mxb << '\n';
}