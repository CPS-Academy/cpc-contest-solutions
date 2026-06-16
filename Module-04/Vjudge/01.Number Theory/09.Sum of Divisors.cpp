#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

int main() {
    int n, a, b;
    int t = 1;
    while(t--){
        cin >> n;
        long long int sum = 0;
        for(long long int i = 1; i <= n; i++){
            int x = n / i;
            sum += i * (x + 1) * x  / 2;
        }
        cout << sum << '\n';
    }
    return 0;
}
