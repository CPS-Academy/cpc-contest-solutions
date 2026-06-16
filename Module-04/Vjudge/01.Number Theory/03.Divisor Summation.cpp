#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

bool* isPrime;
vector<int> primes;

void generatePrimes(int n){
    if(n < 2) return;
    isPrime = new bool[n + 1];
    primes.clear();
    isPrime[0] = false, isPrime[1] = false;
    for(int i = 2; i <= n; i++) isPrime[i] = true;
    primes.push_back(2);
    int i;
    for(i = 3; i * i <= n; i += 2){
        if(isPrime[i]){
            primes.push_back(i);
            for(int imul = i * i; imul <= n; imul += (i << 1)){
                isPrime[imul] = false;
            }
        }
    }
    
    for(; i <= n; i += 2){
        if(isPrime[i]){
            primes.push_back(i);
        }
    }
    
    return;
}

long long int fastPow(int a, int p) // find a to the power p
{
    if(p == 0) return 1;
    if(p == 1) return a;
    
    // a^10 = a^5 * a^5
    // a^11 = a^5 * a^5 * a
    long long int x = fastPow(a, p / 2);
    x = x * x;
    if(p & 1) x = x * a;
    return x;
}

int main() {
    
    int n, x;
    cin >> n;
    const int xmax = 5e5;
    generatePrimes(sqrt(xmax) + 3);
    // for(auto num: primes) cout << num << " "; cout << endl;
    
    for(int i = 0; i < n; i++){
        cin >> x;
        int xcopy = x;
        long long int ans = 1;
        for(int p: primes){
            if(p * p > x) break;
            int cnt = 0;
            while(x % p == 0){
                x /= p;
                cnt++;
            }
            if(cnt > 0){
                ans *= (fastPow(p, cnt + 1) - 1) / (p - 1);
            }
        }
        if(x > 1){
            // x is a lone prime
            ans *= (x + 1);
        }
        ans -= xcopy;
        cout << ans << '\n';
    }
    return 0;
}
