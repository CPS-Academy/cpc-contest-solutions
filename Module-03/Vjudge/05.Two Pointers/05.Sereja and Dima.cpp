#include<bits/stdc++.h>

using namespace std;
int main() {
    int n;
    cin >> n;
    vector < int > a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    int i = 0, j = n - 1;
    int player1 = 0, player2 = 0, t = 1;
    while (i <= j) {
        if (t % 2 == 1) {
            if (a[i] > a[j]) {
                player1 += a[i];
                i++;
            } else {
                player1 += a[j];
                j--;
            }
        } else {
            if (a[i] > a[j]) {
                player2 += a[i];
                i++;
            } else {
                player2 += a[j];
                j--;
            }
        }
        t++;
    }
    cout << player1 << " " << player2 << '\n';
}
