#include<bits/stdc++.h>

using namespace std;
void fun(long long n) {
    cout << n << ' ';
    if (n == 1) return;
    if (n % 2 == 0) fun(n / 2);
    else fun(n * 3 + 1);
}
int main() {
    int n;
    cin >> n;
    fun(n);
    return 0;
}