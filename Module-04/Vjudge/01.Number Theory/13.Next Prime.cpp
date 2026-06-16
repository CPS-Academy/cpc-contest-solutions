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

int main() {
    
    long long int n;
    const int nmax = 1e6+3;
    generatePrimes(nmax);
    // for(auto num: primes) cout << num << " "; cout << endl;
    
    int t = 1;
    cin >> t;
    while(t--){
        cin >> n;
        if(n == 1) {
            cout << "2\n";
            continue;
        }
        if(n & 1){n += 2;} else n++;
        while(true){
            bool nisprime = true;
            for(int p: primes){
                if(p >= n) break;
                if(n % p == 0){
                    nisprime = false;
                    break;
                }
            }
            if(nisprime){
                cout << n << '\n';
                break;
            }
            n += 2;
        }
        // break;
    }
    return 0;
}
