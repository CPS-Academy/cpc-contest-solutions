#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

bool* isPrime;
// vector<int> primes;

void generatePrimes(int n){
    if(n < 2) return;
    isPrime = new bool[n + 1];
    // primes.clear();
    isPrime[0] = false, isPrime[1] = false;
    for(int i = 2; i <= n; i++) isPrime[i] = true;
    // primes.push_back(2);
    int i;
    for(i = 3; i * i <= n; i += 2){
        if(isPrime[i]){
            // primes.push_back(i);
            for(int imul = i * i; imul <= n; imul += (i << 1)){
                isPrime[imul] = false;
            }
        }
    }
    
    for(; i <= n; i += 2){
        if(isPrime[i]){
            // primes.push_back(i);
        }
    }
    
    return;
}

int main() {
    
    long long int n;
    const int nmax = 1e6+3;
    generatePrimes(nmax);
    // for(auto num: primes) cout << num << " "; cout << endl;
    
    int t = 1;
    cin >> t;
    while(t--){
        cin >> n;
        long long int sq = sqrtl(n);
        if(sq * sq == n  && isPrime[sq] && (((sq > 2) && (sq & 1)) || sq == 2))
            cout << "YES\n";
        else
            cout << "NO\n";
        
    }
    return 0;
}
