#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

bool* isPrime;
vector<int> primes;

const long long int mod = 1e9 + 7;

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

long long int fastPow(long long int a, long long int p) // find a to the power p
{
    if(p == 0) return 1;
    if(p == 1) return a;
    
    // a^10 = a^5 * a^5
    // a^11 = a^5 * a^5 * a
    long long int x = fastPow(a, p / 2);
    x = x * x % mod;
    if(p & 1) x = x * a % mod;
    return x;
}

// how many p in n!
long long int getP_inNFac(long long int n, long long int p){
    long long int p_pow = p;
    long long int pow_sum = 0;
    while(true){
        pow_sum += n / p_pow;
        if(p_pow > n / p) break;
        p_pow *= p;
    }
    return pow_sum;
}

int main() {
    
    long long int n, x, ans;
    const int nmax = 31700;
    generatePrimes(nmax);
    // for(auto num: primes) cout << num << " "; cout << endl;
    
    int t = 1;
    // cin >> t;
    while(t--){
        cin >> x >> n;
        
        ans = 1;
        for(long long int p: primes){
            if(x == 1) break;
            if(x % p > 0) continue;
            while(x % p == 0) x /= p;
            
            ans *= fastPow(p, getP_inNFac(n, p));
            ans %= mod;
            
        }
        if(x > 1){
            // current x is prime
            
            ans *= fastPow(x, getP_inNFac(n, x));
            ans %= mod;
        }
        cout << ans << endl;
    }
    
    return 0;
}
